#!/bin/bash

object=$1

case $object in
    cpu)
        echo "you enter cpu"
        ;;
    mem)
        echo "you enter memory"
        ;;
    disk)
        echo "you enter disk"
        ;;
    *)
        echo "doesn't support"
        ;;
esac
