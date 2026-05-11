#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[100],b[100],i,j,k,l,m,n,s,p,t;

        cin>>n;
        s=0;
        for(i=0;i<n;i++){cin>>a[i];s+=a[i];}
        sort(a,a+n);
        cin>>m;
        for(i=0;i<m;i++){cin>>b[i];cout<<s-a[n-b[i]]<<"\n";}


    return 0;
}


/*


out of boun error a[300000],b[200000]

Diagnostics detected issues [cpp.clang++-c++20-diagnose]: =================================================================
==5036==ERROR: AddressSanitizer: stack-buffer-overflow on address 0x10dff6d0 at pc 0x00064261 bp 0x10a2e614 sp 0x10a2e610
WRITE of size 8 at 0x10dff6d0 thread T0
==5036==WARNING: Failed to use and restart external symbolizer!
    #0 0x64260 in std::num_get<char,std::istreambuf_iterator<char,std::char_traits<char> > >::do_get C:\Program Files (x86)\Microsoft Visual Studio\2017\Enterprise\VC\Tools\MSVC\14.14.26428\include\xlocnum:591
    #1 0x56e09 in std::num_get<char,std::istreambuf_iterator<char,std::char_traits<char> > >::get C:\Program Files (x86)\Microsoft Visual Studio\2017\Enterprise\VC\Tools\MSVC\14.14.26428\include\xlocnum:401
    #2 0x521fb in std::basic_istream<char,std::char_traits<char> >::operator>> C:\Program Files (x86)\Microsoft Visual Studio\2017\Enterprise\VC\Tools\MSVC\14.14.26428\include\istream:391
    #3 0x517dc in main K:\codeforces73\8c137604381368e5e55168a43c4f042a\compile-ac456b1dabc728557807da43d0e4b116\p71.cpp:12
    #4 0xdec41 in __scrt_common_main_seh f:\dd\vctools\crt\vcstartup\src\startup\exe_common.inl:283
    #5 0x762e67f8 in BaseThreadInitThunk+0x18 (C:\Windows\System32\KERNEL32.DLL+0x6b8167f8)
    #6 0x77ea7f4c in RtlGetFullPathName_UEx+0xac (C:\Windows\SYSTEM32\ntdll.dll+0x4b2e7f4c)
    #7 0x77ea7f1a in RtlGetFullPathName_UEx+0x7a (C:\Windows\SYSTEM32\ntdll.dll+0x4b2e7f1a)

Address 0x10dff6d0 is located in stack of thread T0 at offset 4000272 in frame
    #0 0x5100f in main K:\codeforces73\8c137604381368e5e55168a43c4f042a\compile-ac456b1dabc728557807da43d0e4b116\p71.cpp:4

  This frame has 9 object(s):
    [16, 2400016) 'a' (line 5)
    [2400272, 4000272) 'b' (line 5) <== Memory access at offset 4000272 overflows this variable
    [4000528, 4000536) 'm' (line 5)
    [4000560, 4000568) 'n' (line 5)
    [4000592, 4000600) 'tmp'
    [4000624, 4000632) 'tmp5'
    [4000656, 4000664) 'tmp23'
    [4000688, 4000696) 'tmp33'
    [4000720, 4000728) 'tmp42'
HINT: this may be a false positive if your program uses some custom stack unwind mechanism, swapcontext or vfork
      (longjmp, SEH and C++ exceptions *are* supported)
SUMMARY: AddressSanitizer: stack-buffer-overflow C:\Program Files (x86)\Microsoft Visual Studio\2017\Enterprise\VC\Tools\MSVC\14.14.26428\include\xlocnum:591 in std::num_get<char,std::istreambuf_iterator<char,std::char_traits<char> > >::do_get
Shadow bytes around the buggy address:
  0x321bfe80: 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00
  0x321bfe90: 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00
  0x321bfea0: 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00
  0x321bfeb0: 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00
  0x321bfec0: 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00
=>0x321bfed0: 00 00 00 00 00 00 00 00 00 00[f2]f2 f2 f2 f2 f2
  0x321bfee0: f2 f2 f2 f2 f2 f2 f2 f2 f2 f2 f2 f2 f2 f2 f2 f2
  0x321bfef0: f2 f2 f2 f2 f2 f2 f2 f2 f2 f2 00 f2 f2 f2 00 f2
  0x321bff00: f2 f2 00 f2 f2 f2 00 f2 f2 f2 00 f2 f2 f2 00 f2
  0x321bff10: f2 f2 00 f3 f3 f3 00 00 00 00 00 00 00 00 00 00
  0x321bff20: 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00
Shadow byte legend (one shadow byte represents 8 application bytes):
  Addressable:           00
  Partially addressable: 01 02 03 04 05 06 07
  Heap left redzone:       fa
  Freed heap region:       fd
  Stack left redzone:      f1
  Stack mid redzone:       f2
  Stack right redzone:     f3
  Stack after return:      f5
  Stack use after scope:   f8
  Global redzone:          f9
  Global init order:       f6
  Poisoned by user:        f7
  Container overflow:      fc
  Array cookie:            ac
  Intra object redzone:    bb
  ASan internal:           fe
  Left alloca redzone:     ca
  Right alloca redzone:    cb
  Shadow gap:              cc
==5036==ABORTING

*/
