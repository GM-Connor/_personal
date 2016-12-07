# UNIX directory

### c
allows `cc` (UNIX c compiler program) to be run without args, setting input file arg as first .c file found in current working directory

### cased.c
converts input to uppercase/lowercase depending on option. prints original if no option
```
cased [-u] [-l]
```

### echo.c
prints command-line arguments
```
echo [ARGUMENT]...
```

### find.c
prints input lines matching pattern
```
find [-x] [-n] %PATTERN%
```

### p.c
prints input in chunks. accepts custom chunksize as well as option filename(s)
```
p [-%n%] [%filenames%]
```

### pick
select from list of arguments

### zap.c
interactive program killer for UNIX/LINUX
```
zap [%match_string%]
```