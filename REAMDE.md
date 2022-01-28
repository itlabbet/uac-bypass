# Compilitaion instructions:

## fodhelper works for both x86 and x64

### x86
i686-w64-mingw32-gcc fodhelper-bypass.c -o fodhelper-bypass-x86.exee

### x64
x86_64-w64-mingw32-gcc fodhelper-bypass.c -o fodhelper-bypassuac-x64.exe

## EventVwr works only for x64

### x64
x86_64-w64-mingw32-gcc eventvwr-bypass.c -o eventvwr-bypass-x64.exe
