#include <iostream>
#include <fcntl.h>
#include <fstream>
#include <google/protobuf/text_format.h>
#include <google/protobuf/io/zero_copy_stream_impl.h>

#include "msg.pb.h"

using namespace std;

void ListMsg(const lm::helloworld & msg) { 
  cout << msg.id() << endl; 
  cout << msg.str() << endl; 
} 

int main(int argc, char* argv[]) {
    GOOGLE_PROTOBUF_VERIFY_VERSION;

    lm::helloworld hw;

    bool retValue = false;

    int fileDescriptor = open(argv[1], O_RDONLY);

    if( fileDescriptor < 0) {
        cerr << "Error opening the file" << endl;
        return false;
    }

    google::protobuf::io::FileInputStream fileInput(fileDescriptor);
    fileInput.SetCloseOnDelete(true);

    if (!google::protobuf::TextFormat::Parse(&fileInput, &hw)) {
        cerr << endl << "Failed to parse file!" << endl;
        return -1;
    } else {
        retValue = true;
        cerr << "Read Input File " << argv[1] << " successfully"<< endl;
    }

	ListMsg(hw);
}
