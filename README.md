# tars2cpp_demo
a demo for tarscpp, based on cmake build system

## to build and run 
```bash
cd src && cd build && cmake -S .. && cmake --build . --config Release -v && ./cell_main --k1=v1,1,2,3 --k2=v2,4,5,6 --k3 --k4=v4 && cd -
```

## console out

```text
/root/jd/t/git/TarsCpp/demo/src/build/log.log
Enum_a:: DA
Enum_a_:: DA
e_a == e_a?:1
{"rate":0,"level":11}
{"rate":0,"level":2999}
./a/b/c.txt
{"rate":0,"level":11}
Starting thread pool...
Thread ID: 140340166592192, Value: 1
Thread ID: 140340149806784, Value: 3
Thread ID: 140340166592192, Value: 4
Thread ID: 140340158199488, Value: 2
Thread ID: 140340158199488, Value: 6
Thread ID: 140340149806784, Value: 5
Thread ID: 140340166592192, Value: 7
_Option k1 is set to: v1,1,2,3, k2 is set to: v2,4,5,6
_Option k3 is set to: , k4 is set to: v4
/root/jd/t/git/TarsCpp/demo/src
```
