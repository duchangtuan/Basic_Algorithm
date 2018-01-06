#!/usr/bin/env python

def double_number(number):
    while True:
        number *= 2
        number = yield number

c = double_number(4)

# It is done to 'start' the generator. It is just something that needs to be done. It makes some sense when you think about it since the first time you call send() the generator has not reached the keyword yield yet.
print c.send(None)

print c.send(10)

print c.send(1500)

print c.send(3)

for n in range(10):
    x = c.send(n)
    print x
