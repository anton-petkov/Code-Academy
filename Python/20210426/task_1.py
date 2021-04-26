from typing import overload

@overload    
def func(c,d):
    print(c,d)


def func(a,b):
    print(a+b)
    
if __name__ == '__main__':
    func(5,12)
    func('5','12')

