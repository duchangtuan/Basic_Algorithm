#!/usr/bin/env python

import time
import functools

def metric(fn):
    @functools.wraps(fn)
    def wrapper(*args, **kw):
        begin_time = time.time()
        f = fn(*args, **kw)
        end_time = time.time()
        print '%s costs %s' % (fn.__name__, end_time - begin_time)
        return f
    return wrapper

@metric
def add1(x,  y):
    time.sleep(0.1)
    return x + y

@metric
def add2(x, y, z):
    time.sleep(1)
    return x + y + z

f = add1(11, 22)
g = add2(11, 22, 33)

print f, g
