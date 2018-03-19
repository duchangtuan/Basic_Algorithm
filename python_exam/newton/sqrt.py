#!/usr/bin/env python

def sqrt(n):
    """
    suppose f(x)=0 has a root close to x0, then the following iterative formula:
    Xn+1 = Xn - f(Xn)/f'(Xn)
    calcuate the X1, X2, X3, ... one by one, then the sequence would approach
    the root of the function f(x) = 0.
    f(x) = x^2 - a
    the first derivative of f(x) is f'(x)=2x
    Newton iterative formula is: Xn+1 = Xn - (Xn^2-a)/2Xn = 1/2(Xn + a/Xn)
    """
    EPS = 0.0001
    result = float(n)
    while True:
        lastValue = result
        result = (result + n / result)/2
        if abs(result - lastValue) < EPS:
            break
    return result


if __name__ == '__main__':
    print sqrt(13)
