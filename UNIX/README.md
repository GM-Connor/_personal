# UNIX directory

### c
allows `cc` (UNIX c compiler program) to be run without args, setting input file arg as first .c file found in current working directory

### echo.c
prints command-line arguments
```
echo [ARGUMENT]...
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