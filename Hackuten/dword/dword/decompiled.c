#include "out.h"



void FUN_004011b0(void)

{
  code *pcVar1;
  int *piVar2;
  undefined4 *puVar3;
  UINT uExitCode;
  
  ___dyn_tls_init_12(0,2);
  _SetUnhandledExceptionFilter_4((LPTOP_LEVEL_EXCEPTION_FILTER)&LAB_00401000);
  ___cpu_features_init();
  fesetenv(__CRT_fenv);
  __setargv();
  pcVar1 = _iob_exref;
  if (__CRT_fmode != 0) {
    __fmode = __CRT_fmode;
    __setmode(*(int *)(_iob_exref + 0x10),__CRT_fmode);
    __setmode(*(int *)(pcVar1 + 0x30),__CRT_fmode);
    __setmode(*(int *)(pcVar1 + 0x50),__CRT_fmode);
  }
  piVar2 = (int *)___p__fmode();
  *piVar2 = __fmode;
  __pei386_runtime_relocator();
  ___main();
  puVar3 = (undefined4 *)___p__environ();
  uExitCode = _main(__argc,DAT_00407000,(char **)*puVar3);
  __cexit();
                    // WARNING: Subroutine does not return
  _ExitProcess_4(uExitCode);
}



void __mingw32_init_mainargs(void)

{
  char **local_14;
  _startupinfo local_10 [4];
  
  local_10[0].newmode = 0;
  ___getmainargs(&__argc,(char ***)&DAT_00407000,&local_14,__CRT_glob & 1,local_10);
  return;
}



// mainCRTStartup

void __cdecl mainCRTStartup(void)

{
  _func_4879 *in_stack_ffffffcc;
  
  __set_app_type(1);
  FUN_004011b0();
  __set_app_type(2);
  FUN_004011b0();
                    // WARNING: Could not recover jumptable at 0x00401320. Too many branches
                    // WARNING: Treating indirect jump as call
  atexit(in_stack_ffffffcc);
  return;
}



// atexit

void __cdecl atexit(_func_4879 *param_1)

{
                    // WARNING: Could not recover jumptable at 0x00401320. Too many branches
                    // WARNING: Treating indirect jump as call
  atexit(param_1);
  return;
}



int __cdecl _main(int _Argc,char **_Argv,char **_Env)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  char local_ae [18];
  undefined4 auStack_9c [7];
  undefined4 uStack_80;
  char local_7c [100];
  char *local_18;
  char *local_14;
  
  ___main();
  printf("Enter password: ");
  scanf("%s");
  local_14 = "Password: is Mwehehehehehe";
  local_18 = "flag is not here (-.-) Base6?";
  local_ae[0] = 'M';
  local_ae[1] = 'w';
  local_ae[2] = 'e';
  local_ae[3] = 'h';
  local_ae[4] = 'e';
  local_ae[5] = 'h';
  local_ae[6] = 'e';
  local_ae[7] = 'h';
  local_ae[8] = 'e';
  local_ae[9] = 'h';
  local_ae[10] = 'e';
  local_ae[0xb] = 'h';
  local_ae[0xc] = 'e';
  local_ae[0xd] = '\0';
  local_ae[0xe] = '\0';
  local_ae[0xf] = '\0';
  stack0xffffff62 = 0;
  uStack_80 = 0;
  puVar3 = auStack_9c;
  for (uVar2 = (uint)(local_7c + -(int)auStack_9c) >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  iVar1 = strcmp(local_7c,local_ae);
  if (iVar1 == 0) {
    puts("Correct! Flag Good Job  ");
  }
  else {
    puts("Wrong password!");
  }
  return 0;
}



// WARNING: Unable to track spacebase fully for stack

int __cdecl __setargv(void)

{
  char cVar1;
  bool bVar2;
  char *pcVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  int iVar7;
  int iVar8;
  char *pcVar9;
  int iVar10;
  char *pcVar11;
  uint uStackY_60;
  char acStack_4c [8];
  int local_44;
  undefined1 *local_40;
  uint local_3c;
  char *local_38;
  int local_34;
  uint local_30;
  undefined1 local_2c [4];
  undefined4 local_28;
  int local_24;
  undefined4 local_20;
  
  if ((__CRT_glob & 2) == 0) {
    uStackY_60 = 0x4018a5;
    iVar8 = __mingw32_init_mainargs();
    return iVar8;
  }
  uStackY_60 = 0x4015bb;
  pcVar3 = _GetCommandLineA_0();
  uStackY_60 = 0x4015c8;
  local_40 = &stack0xffffffa4;
  strlen(pcVar3);
  uStackY_60 = 0x4015d7;
  uVar4 = ___chkstk_ms();
  iVar8 = -uVar4;
  local_20 = 0;
  local_30 = 0;
  local_34 = 0;
  local_38 = acStack_4c + iVar8;
  local_3c = __CRT_glob & 0x4400 | 0x10;
  uVar4 = 0;
  pcVar6 = acStack_4c + iVar8;
LAB_00401610:
  do {
    cVar1 = *pcVar3;
joined_r0x0040161b:
    iVar10 = (int)cVar1;
    if (iVar10 == 0) {
      if (uVar4 != 0) {
        pcVar5 = pcVar6 + uVar4;
        pcVar3 = pcVar6;
        do {
          pcVar9 = pcVar3 + 1;
          *pcVar3 = '\\';
          pcVar6 = pcVar5;
          pcVar3 = pcVar9;
        } while (pcVar9 != pcVar5);
      }
      if ((local_38 < pcVar6) || (local_34 != 0)) {
        *pcVar6 = '\0';
        *(undefined4 *)(&stack0xffffffac + iVar8) = 0;
        *(undefined1 **)(&stack0xffffffb0 + iVar8) = local_2c;
        *(uint *)(&stack0xffffffa8 + iVar8) = local_3c;
        *(char **)(&stack0xffffffa4 + iVar8) = local_38;
        *(undefined4 *)((int)&uStackY_60 + iVar8) = 0x401896;
        ___mingw_glob(*(char **)(&stack0xffffffa4 + iVar8),*(uint *)(&stack0xffffffa8 + iVar8),
                      *(undefined **)(&stack0xffffffac + iVar8),*(int **)(&stack0xffffffb0 + iVar8))
        ;
      }
      __argc = local_28;
      DAT_00407000 = local_24;
      return local_24;
    }
    pcVar3 = pcVar3 + 1;
    if (cVar1 == '?') goto LAB_004017b3;
    if (cVar1 < '@') {
      iVar7 = (int)uVar4 >> 1;
      if (cVar1 != '\'') {
        if (cVar1 == '*') goto LAB_004017b3;
        if (cVar1 != '\"') goto LAB_00401750;
        if (iVar7 != 0) {
          pcVar9 = pcVar6 + iVar7;
          pcVar5 = pcVar6;
          do {
            pcVar11 = pcVar5 + 1;
            *pcVar5 = '\\';
            pcVar6 = pcVar9;
            pcVar5 = pcVar11;
          } while (pcVar11 != pcVar9);
        }
        if ((local_30 == 0x27) || ((uVar4 & 1) != 0)) break;
        local_30 = local_30 ^ 0x22;
        cVar1 = *pcVar3;
        uVar4 = 0;
        local_34 = 1;
        goto joined_r0x0040161b;
      }
      if ((__CRT_glob & 0x10) == 0) {
LAB_00401750:
        pcVar5 = pcVar6 + uVar4;
        pcVar9 = pcVar6;
        if (uVar4 != 0) {
          do {
            pcVar11 = pcVar6 + 1;
            *pcVar6 = '\\';
            pcVar6 = pcVar11;
            pcVar9 = pcVar5;
          } while (pcVar11 != pcVar5);
        }
        if (local_30 == 0) {
          if (*(int *)__mb_cur_max_exref == 1) {
            if ((*(byte *)(*(int *)_pctype_exref + iVar10 * 2) & 0x40) == 0) goto LAB_0040179e;
          }
          else {
            *(undefined4 *)(&stack0xffffffa8 + iVar8) = 0x40;
            *(int *)(&stack0xffffffa4 + iVar8) = iVar10;
            local_44 = iVar10;
            *(undefined4 *)((int)&uStackY_60 + iVar8) = 0x401793;
            iVar7 = __isctype(*(int *)(&stack0xffffffa4 + iVar8),*(int *)(&stack0xffffffa8 + iVar8))
            ;
            iVar10 = local_44;
            if (iVar7 == 0) {
LAB_0040179e:
              if (iVar10 != 9) goto LAB_004017a7;
            }
          }
          if ((local_38 < pcVar9) || (local_34 != 0)) {
            *pcVar9 = '\0';
            *(undefined4 *)(&stack0xffffffac + iVar8) = 0;
            *(undefined1 **)(&stack0xffffffb0 + iVar8) = local_2c;
            uVar4 = local_3c;
            *(uint *)(&stack0xffffffa8 + iVar8) = local_3c;
            pcVar6 = local_38;
            *(char **)(&stack0xffffffa4 + iVar8) = local_38;
            *(undefined4 *)((int)&uStackY_60 + iVar8) = 0x4018f4;
            ___mingw_glob(*(char **)(&stack0xffffffa4 + iVar8),*(uint *)(&stack0xffffffa8 + iVar8),
                          *(undefined **)(&stack0xffffffac + iVar8),
                          *(int **)(&stack0xffffffb0 + iVar8));
            local_34 = 0;
            local_3c = uVar4 | 1;
            uVar4 = 0;
          }
          else {
            uVar4 = 0;
            local_34 = 0;
            pcVar6 = pcVar9;
          }
        }
        else {
LAB_004017a7:
          *pcVar9 = cVar1;
          uVar4 = 0;
          pcVar6 = pcVar9 + 1;
        }
      }
      else {
        if (iVar7 != 0) {
          pcVar9 = pcVar6 + iVar7;
          pcVar5 = pcVar6;
          do {
            pcVar11 = pcVar5 + 1;
            *pcVar5 = '\\';
            pcVar6 = pcVar9;
            pcVar5 = pcVar11;
          } while (pcVar11 != pcVar9);
        }
        if ((local_30 == 0x22) || ((uVar4 & 1) != 0)) {
          *pcVar6 = '\'';
          uVar4 = 0;
          local_34 = 1;
          pcVar6 = pcVar6 + 1;
        }
        else {
          local_30 = local_30 ^ 0x27;
          uVar4 = 0;
          local_34 = 1;
        }
      }
      goto LAB_00401610;
    }
    if (cVar1 == '\\') {
      if (local_30 == 0x27) {
        *pcVar6 = '\\';
        pcVar6 = pcVar6 + 1;
      }
      else {
        uVar4 = uVar4 + 1;
      }
      goto LAB_00401610;
    }
    if (cVar1 == '\x7f') {
LAB_004017b3:
      if (uVar4 == 0) {
        bVar2 = iVar10 == 0x7f || local_30 != 0;
        goto LAB_0040172b;
      }
      bVar2 = iVar10 == 0x7f || local_30 != 0;
    }
    else {
      if (cVar1 != '[') goto LAB_00401750;
      if ((__CRT_glob & 0x20) != 0) goto LAB_004017b3;
      bVar2 = true;
      pcVar5 = pcVar6;
      if (uVar4 == 0) goto LAB_00401742;
    }
    pcVar5 = pcVar6 + uVar4;
    pcVar9 = pcVar6;
    do {
      pcVar6 = pcVar9 + 1;
      *pcVar9 = '\\';
      pcVar9 = pcVar6;
    } while (pcVar6 != pcVar5);
LAB_0040172b:
    pcVar5 = pcVar6;
    if (bVar2) {
LAB_00401742:
      pcVar6 = pcVar5 + 1;
      *pcVar5 = '\x7f';
    }
    *pcVar6 = cVar1;
    uVar4 = 0;
    pcVar6 = pcVar6 + 1;
  } while( true );
  *pcVar6 = '\"';
  uVar4 = 0;
  local_34 = 1;
  pcVar6 = pcVar6 + 1;
  goto LAB_00401610;
}



// WARNING: Removing unreachable block (ram,0x00401a24)
// WARNING: Removing unreachable block (ram,0x00401a16)
// WARNING: Removing unreachable block (ram,0x0040196e)
// WARNING: Removing unreachable block (ram,0x0040195f)
// WARNING: Removing unreachable block (ram,0x004019ee)
// WARNING: Removing unreachable block (ram,0x004019f6)
// WARNING: Removing unreachable block (ram,0x004019f9)
// WARNING: Removing unreachable block (ram,0x00401a01)
// WARNING: Removing unreachable block (ram,0x00401a04)
// WARNING: Removing unreachable block (ram,0x00401a09)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void ___cpu_features_init(void)

{
  int *piVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  byte in_ID;
  undefined1 auStack_210 [520];
  
  if (((uint)((in_ID & 1) != 1) * 0x200000 != (uint)(in_ID & 1) * 0x200000) &&
     (piVar1 = (int *)cpuid_basic_info(0), *piVar1 != 0)) {
    iVar2 = cpuid_Version_info(1);
    uVar4 = *(uint *)(iVar2 + 8);
    ____cpu_features = (uint)((uVar4 & 0x100) != 0);
    if ((*(uint *)(iVar2 + 0xc) & 0x2000) != 0) {
      ____cpu_features = ____cpu_features | 0x80;
    }
    if ((uVar4 & 0x8000) != 0) {
      ____cpu_features = ____cpu_features | 2;
    }
    if ((uVar4 & 0x800000) != 0) {
      ____cpu_features = ____cpu_features | 4;
    }
    if ((uVar4 & 0x1000000) != 0) {
      ____cpu_features = ____cpu_features | 8;
      _fxsave(auStack_210);
      _fxrstor(auStack_210);
      _fxsave(auStack_210);
      LOCK();
      UNLOCK();
      _fxrstor(auStack_210);
    }
    puVar3 = (uint *)cpuid(0x80000000);
    if (0x80000000 < *puVar3) {
      iVar2 = cpuid(0x80000001);
      uVar4 = 0;
      if ((int)*(uint *)(iVar2 + 8) < 0) {
        uVar4 = 0x100;
      }
      if ((*(uint *)(iVar2 + 8) & 0x40000000) != 0) {
        uVar4 = uVar4 | 0x200;
      }
      ____cpu_features = ____cpu_features | uVar4;
    }
  }
  return;
}



void ___do_global_ctors(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  do {
    iVar2 = iVar1;
    iVar1 = iVar2 + 1;
  } while ((&___CTOR_LIST__)[iVar2 + 1] != 0);
  for (; iVar2 != 0; iVar2 = iVar2 + -1) {
    (*(code *)(&___CTOR_LIST__)[iVar2])();
  }
  atexit((_func_4879 *)&___do_global_dtors);
  return;
}



void ___main(void)

{
  if (_bss != 0) {
    return;
  }
  _bss = 1;
  ___do_global_ctors();
  return;
}



undefined4 tls_callback_1(undefined4 param_1,int param_2)

{
  if ((param_2 != 3) && (param_2 != 0)) {
    return 1;
  }
  ___mingw_TLScallback(param_1,param_2);
  return 1;
}



// WARNING: Removing unreachable block (ram,0x00401b83)
// WARNING: Removing unreachable block (ram,0x00401b85)
// WARNING: Removing unreachable block (ram,0x00401b8f)
// WARNING: Removing unreachable block (ram,0x00401b91)
// WARNING: Removing unreachable block (ram,0x00401b98)

undefined4 ___dyn_tls_init_12(undefined4 param_1,int param_2)

{
  if (__CRT_MT != 2) {
    __CRT_MT = 2;
  }
  if ((param_2 != 2) && (param_2 == 1)) {
    ___mingw_TLScallback(param_1,1);
  }
  return 1;
}



void _text(void)

{
  DWORD *pDVar1;
  LPVOID pvVar2;
  DWORD DVar3;
  
  _EnterCriticalSection_4((LPCRITICAL_SECTION)&DAT_00407044);
  for (pDVar1 = _bss; pDVar1 != (DWORD *)0x0; pDVar1 = (DWORD *)pDVar1[2]) {
    pvVar2 = _TlsGetValue_4(*pDVar1);
    DVar3 = _GetLastError_0();
    if ((DVar3 == 0) && (pvVar2 != (LPVOID)0x0)) {
      (*(code *)pDVar1[1])(pvVar2);
    }
  }
  _LeaveCriticalSection_4((LPCRITICAL_SECTION)&DAT_00407044);
  return;
}



undefined4 __cdecl ___mingw_TLScallback(undefined4 param_1,int param_2)

{
  if (param_2 != 1) {
    if (param_2 == 0) {
      if (DAT_00407040 != 0) {
        _text();
      }
      if (DAT_00407040 == 1) {
        DAT_00407040 = 0;
        _DeleteCriticalSection_4((LPCRITICAL_SECTION)&DAT_00407044);
      }
    }
    else if ((param_2 == 3) && (DAT_00407040 != 0)) {
      _text();
    }
    return 1;
  }
  if (DAT_00407040 == 0) {
    _InitializeCriticalSection_4((LPCRITICAL_SECTION)&DAT_00407044);
  }
  DAT_00407040 = 1;
  return 1;
}



void _text(char *param_1)

{
  FILE *pFVar1;
  
  pFVar1 = (FILE *)(_iob_exref + 0x40);
  fwrite("Mingw runtime failure:\n",1,0x17,pFVar1);
  vfprintf(pFVar1,param_1,&stack0x00000008);
                    // WARNING: Subroutine does not return
  abort();
}



void __fastcall FUN_00401e60(size_t param_1,void *param_2)

{
  LPCVOID in_EAX;
  SIZE_T SVar1;
  DWORD local_3c;
  _MEMORY_BASIC_INFORMATION local_38;
  
  SVar1 = _VirtualQuery_12(in_EAX,&local_38,0x1c);
  if (SVar1 == 0) {
                    // WARNING: Subroutine does not return
    _text("  VirtualQuery failed for %d bytes at address %p");
  }
  if ((local_38.Protect == 0x40) || (local_38.Protect == 4)) {
    memcpy(in_EAX,param_2,param_1);
  }
  else {
    _VirtualProtect_16(local_38.BaseAddress,local_38.RegionSize,0x40,&local_3c);
    memcpy(in_EAX,param_2,param_1);
    if ((local_38.Protect != 0x40) && (local_38.Protect != 4)) {
      _VirtualProtect_16(local_38.BaseAddress,local_38.RegionSize,local_3c,&local_3c);
      return;
    }
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x00401f88)
// WARNING: Removing unreachable block (ram,0x00401f96)
// WARNING: Removing unreachable block (ram,0x00401fa4)
// WARNING: Removing unreachable block (ram,0x00401fb7)
// WARNING: Removing unreachable block (ram,0x00401f79)
// WARNING: Removing unreachable block (ram,0x00402070)
// WARNING: Removing unreachable block (ram,0x00402075)
// WARNING: Removing unreachable block (ram,0x0040207b)
// WARNING: Removing unreachable block (ram,0x00401fbc)
// WARNING: Removing unreachable block (ram,0x0040210b)
// WARNING: Removing unreachable block (ram,0x00401fc8)
// WARNING: Removing unreachable block (ram,0x00401fd7)
// WARNING: Removing unreachable block (ram,0x00402090)
// WARNING: Removing unreachable block (ram,0x0040209c)
// WARNING: Removing unreachable block (ram,0x004020a2)
// WARNING: Removing unreachable block (ram,0x00401ffb)
// WARNING: Removing unreachable block (ram,0x004020f0)
// WARNING: Removing unreachable block (ram,0x00402004)
// WARNING: Removing unreachable block (ram,0x0040200d)
// WARNING: Removing unreachable block (ram,0x004020c0)
// WARNING: Removing unreachable block (ram,0x004020c9)
// WARNING: Removing unreachable block (ram,0x004020cf)
// WARNING: Removing unreachable block (ram,0x00402086)
// WARNING: Removing unreachable block (ram,0x00402025)
// WARNING: Removing unreachable block (ram,0x0040202a)
// WARNING: Removing unreachable block (ram,0x00402032)
// WARNING: Removing unreachable block (ram,0x00402060)

void __pei386_runtime_relocator(void)

{
  if (_bss == 0) {
    _bss = 1;
  }
  return;
}



uint ___chkstk_ms(void)

{
  uint in_EAX;
  uint uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)&stack0x00000004;
  uVar1 = in_EAX;
  if (0xfff < in_EAX) {
    do {
      puVar2 = puVar2 + -0x400;
      *puVar2 = *puVar2;
      uVar1 = uVar1 - 0x1000;
    } while (0x1000 < uVar1);
  }
  *(undefined4 *)((int)puVar2 - uVar1) = *(undefined4 *)((int)puVar2 - uVar1);
  return in_EAX;
}



// fesetenv

undefined4 __cdecl fesetenv(int param_1)

{
  undefined4 local_10;
  
  local_10 = 0x1f80;
  if (param_1 == -3) {
    _data = -1;
    goto LAB_00402181;
  }
  if (param_1 == -4) {
    _data = -2;
  }
  else {
    if (param_1 == 0) {
      param_1 = _data;
    }
    if (param_1 == -1) goto LAB_00402181;
    if (param_1 != -2) {
      local_10 = (uint)*(ushort *)(param_1 + 0x1c);
      goto LAB_00402181;
    }
  }
  _fpreset();
LAB_00402181:
  if ((___cpu_features & 0x10) != 0) {
    MXCSR = local_10;
  }
  return 0;
}



undefined4 __fastcall _text(undefined4 param_1,uint param_2)

{
  char *pcVar1;
  char *in_EAX;
  uint uVar2;
  char cVar3;
  bool bVar4;
  
  if (in_EAX == (char *)0x0) {
    return 0;
  }
  uVar2 = 0;
  do {
    cVar3 = *in_EAX;
    if (cVar3 == '\0') {
      return 0;
    }
    while( true ) {
      if (((((byte)(param_2 >> 5) ^ 1) & 1) == 0) || (cVar3 != '\x7f')) {
        in_EAX = in_EAX + 1;
      }
      else {
        pcVar1 = in_EAX + 1;
        in_EAX = in_EAX + 2;
        if (*pcVar1 == '\0') {
          return 0;
        }
      }
      if (uVar2 != 0) break;
      if (cVar3 == '*') {
        return 1;
      }
      if (cVar3 == '?') {
        return 1;
      }
      bVar4 = cVar3 == '[';
      cVar3 = *in_EAX;
      uVar2 = (uint)bVar4;
      if (cVar3 == '\0') {
        return 0;
      }
    }
    if ((1 < (int)uVar2) && (cVar3 == ']')) {
      return 1;
    }
    uVar2 = uVar2 + (cVar3 != '!');
  } while( true );
}



undefined4 FUN_00402260(void)

{
  int in_EAX;
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (in_EAX == 0) {
    return 0;
  }
  iVar3 = *(int *)(in_EAX + 0xc) + 1;
  iVar1 = malloc(iVar3 * 4);
  *(int *)(in_EAX + 8) = iVar1;
  uVar2 = 3;
  if (iVar1 != 0) {
    *(undefined4 *)(in_EAX + 4) = 0;
    if (0 < iVar3) {
      do {
        iVar3 = iVar3 + -1;
        *(undefined4 *)(iVar1 + iVar3 * 4) = 0;
      } while (iVar3 != 0);
    }
    uVar2 = 0;
  }
  return uVar2;
}



char * __fastcall FUN_004022d0(uint param_1,uint param_2)

{
  uint uVar1;
  char *in_EAX;
  int iVar2;
  int iVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  
  uVar5 = (uint)*in_EAX;
  if ((uVar5 == 0x5d) || (uVar6 = uVar5, uVar5 == 0x2d)) {
    if (uVar5 == param_2) {
      pcVar7 = in_EAX + 1;
LAB_004024b0:
      do {
        cVar4 = *pcVar7;
        if (cVar4 == ']') goto LAB_004024e5;
        if (cVar4 == '\x7f') {
          if ((param_1 & 0x20) != 0) {
            pcVar7 = pcVar7 + 1;
            goto LAB_004024b0;
          }
          cVar4 = pcVar7[1];
          pcVar7 = pcVar7 + 1;
        }
        pcVar7 = pcVar7 + 1;
        if (cVar4 == '\0') {
          return (char *)0x0;
        }
      } while( true );
    }
    uVar6 = (uint)in_EAX[1];
    in_EAX = in_EAX + 1;
  }
  do {
    pcVar7 = in_EAX + 1;
    if (uVar6 == 0x5d) {
      return (char *)0x0;
    }
    if (uVar6 == 0x2d) {
      if (in_EAX[1] != ']') {
        uVar6 = (uint)in_EAX[1];
        if (uVar6 == 0) {
          return (char *)0x0;
        }
        pcVar7 = in_EAX + 2;
        if ((int)uVar5 < (int)uVar6) {
          do {
            uVar1 = uVar5 + 1;
            if ((param_1 & 0x4000) == 0) {
              iVar2 = tolower(uVar5);
              iVar3 = tolower(param_2);
              if (iVar2 == iVar3) {
LAB_00402427:
                goto LAB_00402432;
              }
            }
            else if (~param_2 + uVar1 == 0) goto LAB_00402427;
            uVar5 = uVar1;
          } while (uVar6 != uVar1);
        }
        else if ((int)uVar6 < (int)uVar5) {
          do {
            uVar1 = uVar5 - 1;
            if ((param_1 & 0x4000) == 0) {
              iVar2 = tolower(uVar5);
              iVar3 = tolower(param_2);
              if (iVar2 == iVar3) {
LAB_00402548:
                goto LAB_00402553;
              }
            }
            else if ((1 - param_2) + uVar1 == 0) goto LAB_00402548;
            uVar5 = uVar1;
          } while (uVar6 != uVar1);
        }
        goto LAB_0040233b;
      }
      uVar5 = 0x2d;
      cVar4 = ']';
    }
    else {
      if (uVar6 == 0) {
        return (char *)0x0;
      }
LAB_0040233b:
      if (uVar6 == 0x2f) {
        return (char *)0x0;
      }
      if (uVar6 == 0x5c) {
        return (char *)0x0;
      }
      cVar4 = *pcVar7;
      uVar5 = uVar6;
    }
    if ((param_1 & 0x4000) == 0) {
      iVar2 = tolower(uVar5);
      iVar3 = tolower(param_2);
      if (iVar2 == iVar3) {
LAB_00402383:
        goto LAB_0040239e;
      }
    }
    else if (uVar5 == param_2) goto LAB_00402383;
    uVar6 = (uint)cVar4;
    in_EAX = pcVar7;
  } while( true );
LAB_00402553:
  cVar4 = *pcVar7;
  if (cVar4 == ']') {
LAB_0040249a:
    return pcVar7 + 1;
  }
  if (cVar4 == '\x7f') {
    if ((param_1 & 0x20) != 0) {
      pcVar7 = pcVar7 + 1;
      goto LAB_00402553;
    }
    cVar4 = pcVar7[1];
    pcVar7 = pcVar7 + 1;
  }
  pcVar7 = pcVar7 + 1;
  if (cVar4 == '\0') {
    return (char *)0x0;
  }
  goto LAB_00402553;
LAB_00402432:
  cVar4 = *pcVar7;
  while( true ) {
    if (cVar4 == ']') goto LAB_0040249a;
    if (cVar4 != '\x7f') goto LAB_0040243d;
    if ((param_1 & 0x20) == 0) break;
    pcVar7 = pcVar7 + 1;
    cVar4 = *pcVar7;
  }
  cVar4 = pcVar7[1];
  pcVar7 = pcVar7 + 1;
LAB_0040243d:
  pcVar7 = pcVar7 + 1;
  if (cVar4 == '\0') {
    return (char *)0x0;
  }
  goto LAB_00402432;
LAB_0040239e:
  if (cVar4 == ']') {
LAB_004024e5:
    return pcVar7 + 1;
  }
  if (cVar4 == '\x7f') {
    if ((param_1 & 0x20) == 0) {
      cVar4 = pcVar7[1];
      pcVar7 = pcVar7 + 1;
      goto LAB_00402390;
    }
  }
  else {
LAB_00402390:
    if (cVar4 == '\0') {
      return (char *)0x0;
    }
  }
  pcVar7 = pcVar7 + 1;
  cVar4 = *pcVar7;
  goto LAB_0040239e;
}



int __fastcall FUN_00402590(uint param_1,char *param_2)

{
  char *in_EAX;
  int iVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  
  cVar3 = *in_EAX;
  if (((*param_2 != '.') || (cVar3 == '.')) || (iVar4 = cVar3 + -0x2e, (param_1 & 0x10000) != 0)) {
    pcVar9 = param_2 + 1;
    while( true ) {
      iVar4 = (int)cVar3;
      pcVar7 = in_EAX + 1;
      if (iVar4 == 0) break;
      if (cVar3 == '?') {
        if (pcVar9[-1] == '\0') {
          return 0x3f;
        }
      }
      else if (cVar3 == '[') {
        uVar5 = (uint)pcVar9[-1];
        if (uVar5 == 0) {
          return 0x5b;
        }
        if (in_EAX[1] == '!') {
          pcVar7 = in_EAX + 2;
          pcVar8 = FUN_004022d0(param_1,uVar5);
          if (pcVar8 == (char *)0x0) {
            cVar3 = in_EAX[2];
            if (cVar3 == ']') {
              pcVar7 = in_EAX + 3;
              cVar3 = in_EAX[3];
            }
            while (cVar3 != ']') {
              if (cVar3 == '\x7f') {
                if ((param_1 & 0x20) == 0) {
                  cVar3 = pcVar7[1];
                  pcVar7 = pcVar7 + 1;
                  goto LAB_00402750;
                }
              }
              else {
LAB_00402750:
                if (cVar3 == '\0') {
                  return 0x5d;
                }
              }
              pcVar7 = pcVar7 + 1;
              cVar3 = *pcVar7;
            }
            pcVar7 = pcVar7 + 1;
          }
        }
        else {
          pcVar7 = FUN_004022d0(param_1,uVar5);
        }
        if (pcVar7 == (char *)0x0) {
          return 0x5d;
        }
      }
      else {
        if (cVar3 == '*') {
          cVar3 = in_EAX[1];
          while (cVar3 == '*') {
            pcVar7 = pcVar7 + 1;
            cVar3 = *pcVar7;
          }
          if (cVar3 != '\0') {
            pcVar9 = pcVar9 + -1;
            do {
              iVar4 = FUN_00402590(param_1 | 0x10000,pcVar9);
              if (iVar4 == 0) {
                return 0;
              }
              cVar3 = *pcVar9;
              pcVar9 = pcVar9 + 1;
            } while (cVar3 != '\0');
            return iVar4;
          }
          return 0;
        }
        if ((((param_1 >> 5 ^ 1) & 1) == 0) || (iVar4 != 0x7f)) {
LAB_004025f2:
          pcVar8 = pcVar7;
        }
        else {
          iVar4 = (int)in_EAX[1];
          pcVar8 = in_EAX + 2;
          if (iVar4 == 0) goto LAB_004025f2;
        }
        iVar6 = (int)pcVar9[-1];
        if (pcVar9[-1] == '\0') {
          iVar6 = 0;
LAB_00402632:
          return iVar4 - iVar6;
        }
        if ((param_1 & 0x4000) == 0) {
          iVar1 = tolower(iVar4);
          iVar2 = tolower(iVar6);
          iVar1 = iVar1 - iVar2;
        }
        else {
          iVar1 = iVar4 - iVar6;
        }
        pcVar7 = pcVar8;
        if (iVar1 != 0) goto LAB_00402632;
      }
      cVar3 = *pcVar7;
      pcVar9 = pcVar9 + 1;
      in_EAX = pcVar7;
    }
    iVar4 = -(int)pcVar9[-1];
  }
  return iVar4;
}



undefined4 __fastcall FUN_004027b0(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 in_EAX;
  int iVar4;
  
  iVar4 = realloc(*(void **)(param_2 + 8),(*(int *)(param_2 + 0xc) + *(int *)(param_2 + 4)) * 4 + 8)
  ;
  if (iVar4 != 0) {
    iVar2 = *(int *)(param_2 + 4);
    iVar3 = *(int *)(param_2 + 0xc);
    *(int *)(param_2 + 8) = iVar4;
    iVar1 = iVar2 + 1;
    *(int *)(param_2 + 4) = iVar1;
    *(undefined4 *)(iVar4 + (iVar2 + iVar3) * 4) = in_EAX;
    *(undefined4 *)(iVar4 + (iVar3 + iVar1) * 4) = 0;
    return 0;
  }
  return 1;
}



void __fastcall FUN_00402810(undefined4 param_1,int param_2)

{
  int *in_EAX;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  
  if (*in_EAX != 0) {
    FUN_00402810(param_1,param_2);
    param_1 = extraout_ECX;
  }
  if ((in_EAX[2] != 0) && (param_2 != 0)) {
    FUN_004027b0(param_1,param_2);
    param_1 = extraout_ECX_00;
  }
  if (in_EAX[1] != 0) {
    FUN_00402810(param_1,param_2);
  }
  free(in_EAX);
  return;
}



// WARNING: Unable to track spacebase fully for stack
// WARNING: Removing unreachable block (ram,0x004030c8)
// WARNING: Type propagation algorithm not settling

uint __fastcall FUN_00402860(undefined *param_1,uint param_2,void *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  code *pcVar3;
  char cVar4;
  char *in_EAX;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  char *pcVar10;
  undefined1 *puVar11;
  undefined4 *puVar12;
  int *piVar13;
  undefined4 extraout_ECX;
  void *extraout_ECX_00;
  void *extraout_ECX_01;
  void *extraout_ECX_02;
  void *extraout_ECX_03;
  void *extraout_ECX_04;
  void *extraout_ECX_05;
  undefined4 extraout_ECX_06;
  undefined4 extraout_ECX_07;
  void *extraout_ECX_08;
  void *this;
  void *extraout_ECX_09;
  undefined4 extraout_ECX_10;
  undefined4 extraout_EDX;
  int extraout_EDX_00;
  char *pcVar14;
  undefined4 *puVar15;
  int *piVar16;
  int *piVar17;
  char *pcVar19;
  uint uVar20;
  char *pcVar21;
  bool bVar22;
  size_t sStackY_80;
  char acStack_70 [15];
  char local_61;
  char *local_60;
  undefined1 *local_5c;
  undefined1 *local_58;
  undefined1 *local_54;
  undefined4 *local_50;
  undefined4 *local_4c;
  int *local_48;
  undefined1 *local_44;
  code *local_40;
  char *local_3c;
  char *local_38;
  uint local_34;
  char *local_30;
  undefined1 local_2c [8];
  int *local_24;
  undefined4 local_20;
  int *piVar18;
  
  local_40 = (code *)param_1;
  local_34 = param_2;
  if ((param_2 & 0x400) != 0) {
    sStackY_80 = 0x402bdb;
    local_44 = &stack0xffffff84;
    strlen(in_EAX);
    sStackY_80 = 0x402be9;
    uVar5 = ___chkstk_ms();
    iVar9 = -uVar5;
    pcVar10 = acStack_70 + iVar9;
    local_3c = pcVar10;
    cVar4 = *in_EAX;
    pcVar14 = in_EAX;
LAB_00402bf9:
    if (cVar4 == '\x7f') goto LAB_00402c25;
    while (pcVar19 = pcVar14, pcVar21 = pcVar10, cVar4 != '{') {
      while( true ) {
        pcVar10 = pcVar21 + 1;
        pcVar14 = pcVar19 + 1;
        *pcVar21 = cVar4;
        if ((cVar4 == '\0') || (cVar4 == '{')) {
          if (cVar4 != '{') goto LAB_0040287a;
          local_38 = pcVar10;
          goto LAB_00402c45;
        }
        cVar4 = pcVar19[1];
        if (cVar4 != '\x7f') break;
LAB_00402c25:
        cVar4 = pcVar14[1];
        *pcVar10 = '\x7f';
        if (cVar4 != '\0') {
          pcVar10[1] = cVar4;
          pcVar14 = pcVar14 + 2;
          cVar4 = *pcVar14;
          pcVar10 = pcVar10 + 2;
          goto LAB_00402bf9;
        }
        pcVar21 = pcVar10 + 1;
        pcVar19 = pcVar14 + 1;
        cVar4 = '\0';
      }
    }
    local_38 = pcVar10;
LAB_00402c45:
    iVar7 = 1;
    pcVar10 = local_38;
LAB_00402c4d:
    cVar4 = pcVar14[1];
    if (cVar4 == '\x7f') goto LAB_00402c7b;
    do {
      pcVar14 = pcVar14 + 1;
      pcVar19 = pcVar10;
      while( true ) {
        if ((cVar4 != '}') && ((cVar4 != ',' || (iVar7 != 1)))) {
          if (cVar4 == '{') {
            iVar7 = iVar7 + 1;
          }
          local_30 = (char *)CONCAT31(local_30._1_3_,cVar4 != '\0');
          pcVar10 = pcVar19 + 1;
          *pcVar19 = cVar4;
          if (cVar4 != '\0') goto LAB_00402c4d;
          pcVar19 = pcVar10;
          if (cVar4 == '\0') {
            return 1;
          }
          goto LAB_00402da0;
        }
        iVar7 = iVar7 + -1;
        if (iVar7 == 0) {
          pcVar10 = pcVar14;
          if (cVar4 != ',') goto LAB_00402d43;
          iVar7 = 1;
          pcVar21 = pcVar14;
          goto LAB_00402d00;
        }
        *pcVar19 = cVar4;
        cVar4 = pcVar14[1];
        pcVar10 = pcVar19 + 1;
        if (cVar4 != '\x7f') break;
LAB_00402c7b:
        cVar4 = pcVar14[2];
        *pcVar10 = '\x7f';
        pcVar19 = pcVar10 + 2;
        pcVar10[1] = cVar4;
        if (cVar4 == '\0') {
          pcVar10[2] = '\0';
          return 1;
        }
        cVar4 = pcVar14[3];
        pcVar14 = pcVar14 + 3;
      }
    } while( true );
  }
LAB_0040287a:
  local_5c = &stack0xffffff84;
  sStackY_80 = 0x402885;
  strlen(in_EAX);
  sStackY_80 = 0x402896;
  uVar5 = ___chkstk_ms();
  iVar9 = -uVar5;
  piVar17 = (int *)(&stack0xffffff84 + iVar9);
  *(undefined4 *)(&stack0xffffff8c + iVar9) = extraout_EDX;
  *(char **)(&stack0xffffff88 + iVar9) = in_EAX;
  *(char **)(&stack0xffffff84 + iVar9) = acStack_70 + iVar9;
  *(undefined4 *)((int)&sStackY_80 + iVar9) = 0x4028ac;
  uVar6 = memcpy(*(void **)(&stack0xffffff84 + iVar9),*(void **)(&stack0xffffff88 + iVar9),
                 *(size_t *)(&stack0xffffff8c + iVar9));
  *(undefined4 *)(&stack0xffffff84 + iVar9) = uVar6;
  *(undefined4 *)((int)&sStackY_80 + iVar9) = 0x4028b4;
  local_30 = ___mingw_dirname(*(char **)(&stack0xffffff84 + iVar9));
  local_20 = 0;
  *(undefined4 *)((int)&sStackY_80 + iVar9) = 0x4028c8;
  local_38 = (char *)FUN_00402260();
  uVar5 = local_34;
  if (local_38 != (char *)0x0) {
    return (uint)local_38;
  }
  *(undefined4 *)((int)&sStackY_80 + iVar9) = 0x4028df;
  iVar7 = _text(extraout_ECX,uVar5);
  if (iVar7 == 0) {
    *(char **)(&stack0xffffff84 + iVar9) = local_30;
    *(undefined4 *)((int)&sStackY_80 + iVar9) = 0x402dcb;
    strlen(*(char **)(&stack0xffffff84 + iVar9));
    *(undefined4 *)((int)&sStackY_80 + iVar9) = 0x402dd9;
    uVar5 = ___chkstk_ms();
    iVar7 = -uVar5;
    pcVar10 = acStack_70 + iVar7 + iVar9;
    pcVar14 = local_30;
    do {
      cVar4 = *pcVar14;
      if (cVar4 == '\x7f') {
        cVar4 = pcVar14[1];
        pcVar14 = pcVar14 + 1;
      }
      pcVar14 = pcVar14 + 1;
      *pcVar10 = cVar4;
      pcVar10 = pcVar10 + 1;
    } while (cVar4 != '\0');
    *(char **)(&stack0xffffff84 + iVar7 + iVar9) = acStack_70 + iVar7 + iVar9;
    *(undefined4 *)((int)&sStackY_80 + iVar7 + iVar9) = 0x402e15;
    pcVar10 = _strdup(*(char **)(&stack0xffffff84 + iVar7 + iVar9));
    if (pcVar10 == (char *)0x0) {
      return 1;
    }
    *(undefined4 *)((int)&sStackY_80 + iVar9) = 0x402e27;
    local_38 = (char *)FUN_004027b0(extraout_ECX_06,(int)local_2c);
  }
  else {
    *(undefined1 **)(&stack0xffffff84 + iVar9) = local_2c;
    pcVar3 = local_40;
    *(undefined4 *)((int)&sStackY_80 + iVar9) = 0x4028fc;
    local_38 = (char *)FUN_00402860(pcVar3,uVar5 | 0x8000,*(void **)(&stack0xffffff84 + iVar9));
  }
  uVar5 = local_34;
  if (local_38 != (char *)0x0) {
    return (uint)local_38;
  }
  if ((in_EAX[1] == '/') || (bVar22 = in_EAX[1] == '\\', bVar22)) {
LAB_0040292b:
    *(char **)(&stack0xffffff84 + iVar9) = local_30;
    *(undefined4 *)((int)&sStackY_80 + iVar9) = 0x402936;
    iVar7 = strlen(*(char **)(&stack0xffffff84 + iVar9));
    local_3c = in_EAX + iVar7;
    if (in_EAX < local_3c) {
      local_61 = *local_3c;
      if ((local_61 == '/') || (local_61 == '\\')) {
      }
      else {
        do {
          pcVar10 = local_3c + -1;
          if (in_EAX == pcVar10) {
            local_61 = local_3c[-1];
            local_3c = pcVar10;
            goto LAB_00402989;
          }
          local_61 = local_3c[-1];
        } while ((local_61 != '/') && (local_3c = pcVar10, local_61 != '\\'));
        local_3c = pcVar10;
      }
    }
    else {
      local_61 = *local_3c;
    }
LAB_00402989:
    if ((local_61 == '/') || (local_61 == '\\')) {
      do {
        cVar4 = local_61;
        local_3c = local_3c + 1;
        local_61 = *local_3c;
      } while (local_61 == '/' || local_61 == '\\');
      local_61 = cVar4;
      local_60 = local_30;
    }
    else {
      local_61 = '\\';
      local_60 = local_30;
    }
  }
  else {
    iVar7 = 2;
    pcVar10 = local_30;
    pcVar14 = ".";
    do {
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      bVar22 = *pcVar10 == *pcVar14;
      pcVar10 = pcVar10 + 1;
      pcVar14 = pcVar14 + 1;
    } while (bVar22);
    if (!bVar22) goto LAB_0040292b;
    if ((local_34 & 0x10) != 0) {
      *(undefined4 *)((int)&sStackY_80 + iVar9) = 0x403024;
      local_38 = (char *)_text(iVar7,uVar5);
      if (local_38 == (char *)0x0) {
        *(char **)(&stack0xffffff84 + iVar9) = in_EAX;
        *(undefined4 *)((int)&sStackY_80 + iVar9) = 0x403039;
        strlen(*(char **)(&stack0xffffff84 + iVar9));
        *(undefined4 *)((int)&sStackY_80 + iVar9) = 0x403047;
        uVar5 = ___chkstk_ms();
        iVar7 = -uVar5;
        pcVar10 = acStack_70 + iVar7 + iVar9;
        do {
          cVar4 = *in_EAX;
          if (cVar4 == '\x7f') {
            cVar4 = in_EAX[1];
            in_EAX = in_EAX + 1;
          }
          in_EAX = in_EAX + 1;
          *pcVar10 = cVar4;
          pcVar10 = pcVar10 + 1;
        } while (cVar4 != '\0');
        *(char **)(&stack0xffffff84 + iVar7 + iVar9) = acStack_70 + iVar7 + iVar9;
        *(undefined4 *)((int)&sStackY_80 + iVar7 + iVar9) = 0x403076;
        pcVar10 = _strdup(*(char **)(&stack0xffffff84 + iVar7 + iVar9));
        piVar13 = (int *)(&stack0xffffff84 + iVar9);
        if ((pcVar10 == (char *)0x0) ||
           (piVar13 = (int *)(&stack0xffffff84 + iVar9), param_3 == (void *)0x0)) {
LAB_00402f9b:
          piVar17 = piVar13;
          local_48 = local_24;
        }
        else {
          *(undefined4 *)((int)&sStackY_80 + iVar9) = 0x403093;
          FUN_004027b0(extraout_ECX_10,(int)param_3);
          local_48 = local_24;
        }
        goto LAB_00402efa;
      }
    }
    local_61 = '\\';
    local_60 = (char *)0x0;
    local_3c = in_EAX;
  }
  local_38 = (char *)0x2;
  local_48 = local_24;
  iVar7 = *local_24;
  local_30 = (char *)(local_34 & 0x8000);
  piVar17 = (int *)(&stack0xffffff84 + iVar9);
  piVar13 = (int *)(&stack0xffffff84 + iVar9);
  if (iVar7 != 0) {
LAB_004029e9:
    piVar17 = piVar13;
    *piVar17 = iVar7;
    piVar17[-1] = 0x4029f1;
    puVar8 = ___mingw_opendir((char *)*piVar17);
    pcVar3 = local_40;
    if (puVar8 == (undefined4 *)0x0) {
      piVar13 = local_48;
      if ((local_34 & 4) != 0) {
LAB_00402ec5:
        piVar16 = piVar13 + 1;
        *piVar17 = *piVar13;
        piVar17[-1] = 0x402ecf;
        free((void *)*piVar17);
        if (piVar13[1] == 0) goto LAB_00402eed;
LAB_00402ed6:
        iVar9 = local_48[1];
        do {
          piVar16 = piVar16 + 1;
          *piVar17 = iVar9;
          piVar17[-1] = 0x402ee7;
          free((void *)*piVar17);
          iVar9 = *piVar16;
        } while (iVar9 != 0);
LAB_00402eed:
        local_38 = (char *)0x1;
        local_48 = local_24;
        goto LAB_00402efa;
      }
      if (local_40 != (code *)0x0) {
        piVar17[-1] = 0x402fb6;
        piVar13 = __errno();
        piVar17[1] = *piVar13;
        piVar13 = local_48;
        *piVar17 = *local_48;
        piVar18 = piVar17 + -1;
        piVar17 = piVar17 + -1;
        *piVar18 = 0x402fc6;
        iVar9 = (*pcVar3)();
        if (iVar9 != 0) goto LAB_00402ec5;
      }
    }
    else {
      if (local_60 == (char *)0x0) {
        local_44 = (undefined1 *)0x0;
        this = extraout_ECX_00;
      }
      else {
        *piVar17 = *local_48;
        piVar17[-1] = 0x402a13;
        local_44 = (undefined1 *)strlen((char *)*piVar17);
        this = extraout_ECX_01;
      }
      local_4c = (undefined4 *)0x0;
      local_58 = local_44 + 2;
      piVar13 = piVar17;
LAB_00402a30:
      piVar17 = piVar13;
      *piVar17 = (int)puVar8;
      piVar17[-1] = 0x402a38;
      iVar9 = ___mingw_readdir(this,*piVar17);
      uVar5 = local_34;
      if (iVar9 != 0) {
        piVar13 = piVar17;
        if ((local_30 == (char *)0x0) || (this = extraout_ECX_02, *(int *)(iVar9 + 8) == 0x10)) {
          piVar17[-1] = 0x402a5f;
          iVar7 = FUN_00402590(uVar5,(char *)(iVar9 + 0xc));
          this = extraout_ECX_03;
          if (iVar7 == 0) {
            local_54 = (undefined1 *)piVar17;
            piVar17[-1] = 0x402a7c;
            uVar5 = ___chkstk_ms();
            puVar11 = local_44;
            iVar7 = -uVar5;
            local_50 = (undefined4 *)0x0;
            pcVar10 = (char *)((int)piVar17 + iVar7 + 0xc);
            puVar12 = (undefined4 *)extraout_EDX_00;
            if (local_44 != (undefined1 *)0x0) {
              local_50 = (undefined4 *)extraout_EDX_00;
              iVar2 = *local_48;
              *(char **)((int)piVar17 + iVar7) = pcVar10;
              *(undefined1 **)((int)piVar17 + iVar7 + 8) = puVar11;
              *(int *)((int)piVar17 + iVar7 + 4) = iVar2;
              *(undefined4 *)((int)piVar17 + iVar7 + -4) = 0x402f2b;
              memcpy(*(void **)((int)piVar17 + iVar7),*(void **)((int)piVar17 + iVar7 + 4),
                     *(size_t *)((int)piVar17 + iVar7 + 8));
              puVar12 = local_50;
              if ((local_44[(int)((int)piVar17 + iVar7 + 0xb)] == '/') ||
                 (local_44[(int)((int)piVar17 + iVar7 + 0xb)] == '\\')) {
                local_50 = (undefined4 *)local_44;
              }
              else {
                local_50 = (undefined4 *)(local_44 + 1);
                pcVar10[(int)local_44] = local_61;
              }
            }
            puVar15 = local_50;
            *(char **)((int)piVar17 + iVar7 + 4) = (char *)(iVar9 + 0xc);
            *(int *)((int)piVar17 + iVar7 + 8) = (int)puVar12 + 1;
            *(undefined1 **)((int)piVar17 + iVar7) = (undefined1 *)((int)puVar15 + (int)pcVar10);
            *(undefined4 *)((int)piVar17 + iVar7 + -4) = 0x402aae;
            memcpy(*(void **)((int)piVar17 + iVar7),*(void **)((int)piVar17 + iVar7 + 4),
                   *(size_t *)((int)piVar17 + iVar7 + 8));
            *(char **)((int)piVar17 + iVar7) = pcVar10;
            *(undefined4 *)((int)piVar17 + iVar7 + -4) = 0x402ab6;
            strlen(*(char **)((int)piVar17 + iVar7));
            *(undefined4 *)((int)piVar17 + iVar7 + -4) = 0x402ac4;
            uVar5 = ___chkstk_ms();
            iVar9 = -uVar5;
            pcVar14 = (char *)((int)piVar17 + iVar9 + iVar7 + 0xc);
            pcVar19 = pcVar14;
            do {
              while (cVar4 = *pcVar10, cVar4 != '\x7f') {
                pcVar10 = pcVar10 + 1;
                *pcVar19 = cVar4;
                pcVar19 = pcVar19 + 1;
                if (cVar4 == '\0') goto LAB_00402af9;
              }
              cVar4 = pcVar10[1];
              pcVar10 = pcVar10 + 2;
              *pcVar19 = cVar4;
              pcVar19 = pcVar19 + 1;
            } while (cVar4 != '\0');
LAB_00402af9:
            *(char **)((int)piVar17 + iVar9 + iVar7) = pcVar14;
            *(undefined4 *)((int)piVar17 + iVar9 + iVar7 + -4) = 0x402b01;
            pcVar10 = _strdup(*(char **)((int)piVar17 + iVar9 + iVar7));
            piVar13 = (int *)local_54;
            if (pcVar10 == (char *)0x0) {
              local_38 = (char *)0x3;
              this = extraout_ECX_04;
              goto LAB_00402a30;
            }
            local_38 = (char *)((uint)local_38 & (local_38 == (char *)0x2) - 1);
            if ((local_34 & 0x40) == 0) {
              if (local_4c == (undefined4 *)0x0) {
                *(undefined4 *)((int)piVar17 + iVar7) = 0xc;
                *(undefined4 *)((int)piVar17 + iVar7 + -4) = 0x402ff1;
                puVar12 = (undefined4 *)malloc(*(size_t *)((int)piVar17 + iVar7));
                this = extraout_ECX_09;
                piVar13 = (int *)local_54;
                if (puVar12 == (undefined4 *)0x0) goto LAB_00402a30;
                puVar12[2] = pcVar10;
                puVar12[1] = 0;
                *puVar12 = 0;
                this = extraout_ECX_09;
              }
              else {
                uVar5 = local_34 & 0x4000;
                local_50 = puVar8;
                puVar12 = local_4c;
                do {
                  puVar15 = puVar12;
                  uVar6 = puVar15[2];
                  *(char **)((int)piVar17 + iVar7) = pcVar10;
                  *(undefined4 *)((int)piVar17 + iVar7 + 4) = uVar6;
                  if (uVar5 == 0) {
                    *(undefined4 *)((int)piVar17 + iVar7 + -4) = 0x402b6a;
                    puVar11 = (undefined1 *)
                              _stricoll(*(char **)((int)piVar17 + iVar7),
                                        *(char **)((int)piVar17 + iVar7 + 4));
                    puVar12 = (undefined4 *)*puVar15;
                    puVar1 = (undefined4 *)puVar15[1];
                    puVar8 = local_50;
                  }
                  else {
                    *(undefined4 *)((int)piVar17 + iVar7 + -4) = 0x402b48;
                    puVar11 = (undefined1 *)
                              strcoll(*(char **)((int)piVar17 + iVar7),
                                      *(char **)((int)piVar17 + iVar7 + 4));
                    puVar12 = (undefined4 *)*puVar15;
                    puVar1 = (undefined4 *)puVar15[1];
                    puVar8 = local_50;
                  }
                  if (0 < (int)puVar11) {
                    puVar12 = puVar1;
                  }
                  local_50 = puVar8;
                } while (puVar12 != (undefined4 *)0x0);
                local_50 = (undefined4 *)puVar11;
                *(undefined4 *)((int)piVar17 + iVar7) = 0xc;
                *(undefined4 *)((int)piVar17 + iVar7 + -4) = 0x402b8b;
                puVar12 = (undefined4 *)malloc(*(size_t *)((int)piVar17 + iVar7));
                this = extraout_ECX_05;
                piVar13 = (int *)local_54;
                if (puVar12 == (undefined4 *)0x0) goto LAB_00402a30;
                puVar12[2] = pcVar10;
                puVar12[1] = 0;
                *puVar12 = 0;
                if (0 < (int)local_50) {
                  puVar15[1] = puVar12;
                  this = extraout_ECX_05;
                  goto LAB_00402a30;
                }
                *puVar15 = puVar12;
                this = extraout_ECX_05;
                if (local_4c != (undefined4 *)0x0) goto LAB_00402a30;
              }
              local_4c = puVar12;
              piVar13 = (int *)local_54;
              goto LAB_00402a30;
            }
            this = param_3;
            if (param_3 != (void *)0x0) {
              *(undefined4 *)((int)piVar17 + iVar7 + -4) = 0x402f75;
              FUN_004027b0(param_3,(int)param_3);
              this = extraout_ECX_08;
              piVar13 = (int *)local_54;
            }
          }
        }
        goto LAB_00402a30;
      }
      *piVar17 = (int)puVar8;
      piVar17[-1] = 0x402e5b;
      ___mingw_closedir((void *)*piVar17);
      if (local_4c != (undefined4 *)0x0) {
        piVar17[-1] = 0x402e6d;
        FUN_00402810(extraout_ECX_07,(int)param_3);
      }
    }
    piVar13 = local_48;
    piVar16 = local_48 + 1;
    *piVar17 = *local_48;
    piVar17[-1] = 0x402e7e;
    free((void *)*piVar17);
    iVar7 = piVar13[1];
    piVar13 = piVar17;
    if (iVar7 == 0) goto LAB_00402f9b;
    if (local_38 == (char *)0x1) goto LAB_00402ed6;
    local_48 = piVar16;
    goto LAB_004029e9;
  }
LAB_00402efa:
  *piVar17 = (int)local_48;
  piVar17[-1] = 0x402f05;
  free((void *)*piVar17);
  return (uint)local_38;
  while (iVar7 = iVar7 + -1, iVar7 != 0) {
LAB_00402d00:
    cVar4 = pcVar21[1];
    pcVar10 = pcVar21 + 1;
    if (cVar4 == '\x7f') {
      cVar4 = pcVar21[2];
      pcVar21 = pcVar10;
      while( true ) {
        if (cVar4 == '\0') goto LAB_00402da0;
        cVar4 = pcVar21[2];
        pcVar10 = pcVar21 + 2;
        if (cVar4 != '\x7f') break;
        cVar4 = pcVar21[3];
        pcVar21 = pcVar10;
      }
    }
    pcVar21 = pcVar10;
    if (cVar4 == '{') {
      iVar7 = iVar7 + 1;
      goto LAB_00402d00;
    }
    if (cVar4 != '}') {
      if (cVar4 == '\0') {
LAB_00402da0:
        *pcVar19 = '\0';
        return 1;
      }
      goto LAB_00402d00;
    }
  }
LAB_00402d43:
  pcVar21 = pcVar10 + 1;
  cVar4 = pcVar10[1];
  while( true ) {
    pcVar21 = pcVar21 + 1;
    *pcVar19 = cVar4;
    if (cVar4 == '\0') break;
    cVar4 = *pcVar21;
    pcVar19 = pcVar19 + 1;
  }
  *(void **)(&stack0xffffff84 + iVar9) = param_3;
  uVar5 = local_34;
  pcVar3 = local_40;
  uVar20 = local_34 | 1;
  *(undefined4 *)((int)&sStackY_80 + iVar9) = 0x402d79;
  uVar5 = FUN_00402860(pcVar3,uVar5,*(void **)(&stack0xffffff84 + iVar9));
  local_34 = uVar20;
  if (uVar5 == 1) {
    return 1;
  }
  if (*pcVar14 != ',') {
    return uVar5;
  }
  goto LAB_00402c45;
}



// WARNING: Unable to track spacebase fully for stack

uint __cdecl ___mingw_glob(char *param_1,uint param_2,undefined *param_3,int *param_4)

{
  char cVar1;
  int iVar2;
  undefined1 *puVar3;
  uint uVar4;
  char *pcVar5;
  undefined4 uStackY_40;
  char acStack_38 [20];
  uint local_24;
  undefined1 *local_20;
  
  if ((param_4 != (int *)0x0) && ((param_2 & 2) == 0)) {
    param_4[3] = 0;
  }
  if ((char *)*param_4 != "glob-1.0-mingw32") {
    uStackY_40 = 0x40311d;
    FUN_00402260();
    *param_4 = (int)"glob-1.0-mingw32";
  }
  uStackY_40 = 0x403132;
  local_24 = FUN_00402860(param_3,param_2,param_4);
  if ((local_24 == 2) && ((param_2 & 0x10) != 0)) {
    uStackY_40 = 0x403163;
    local_20 = &stack0xffffffc4;
    strlen(param_1);
    uStackY_40 = 0x403171;
    uVar4 = ___chkstk_ms();
    iVar2 = -uVar4;
    pcVar5 = acStack_38 + iVar2;
    do {
      while (cVar1 = *param_1, cVar1 == '\x7f') {
        cVar1 = param_1[1];
        param_1 = param_1 + 2;
        *pcVar5 = cVar1;
        pcVar5 = pcVar5 + 1;
        if (cVar1 == '\0') goto LAB_004031a8;
      }
      param_1 = param_1 + 1;
      *pcVar5 = cVar1;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
LAB_004031a8:
    *(char **)(&stack0xffffffc4 + iVar2) = acStack_38 + iVar2;
    *(undefined4 *)((int)&uStackY_40 + iVar2) = 0x4031b3;
    pcVar5 = _strdup(*(char **)(&stack0xffffffc4 + iVar2));
    puVar3 = local_20;
    uVar4 = local_24;
    if (pcVar5 != (char *)0x0) {
      local_20 = (undefined1 *)local_24;
      *(undefined4 *)(puVar3 + -4) = 0x4031cb;
      FUN_004027b0(uVar4,(int)param_4);
      local_24 = (uint)local_20;
    }
  }
  return local_24;
}



// WARNING: Unable to track spacebase fully for stack

char * __cdecl ___mingw_dirname(char *param_1)

{
  short *psVar1;
  char *_Src;
  int iVar2;
  uint uVar3;
  short *psVar4;
  int iVar5;
  short *psVar6;
  short *psVar7;
  short *psVar8;
  short sVar9;
  undefined4 extraout_EDX;
  undefined4 uStackY_40;
  short asStack_30 [2];
  uint local_2c;
  undefined1 *local_28;
  short local_22;
  short *local_20;
  
  uStackY_40 = 0x40325d;
  _Src = (char *)setlocale(2,(char *)0x0);
  if (_Src != (char *)0x0) {
    uStackY_40 = 0x40326b;
    _Src = _strdup(_Src);
  }
  uStackY_40 = 0x403281;
  setlocale(2,"");
  if ((param_1 == (char *)0x0) || (*param_1 == '\0')) {
LAB_00403290:
    uStackY_40 = 0x4032ac;
    iVar2 = wcstombs((char *)0x0,L".",0);
    uStackY_40 = 0x4032c0;
    _bss = (char *)realloc(_bss,iVar2 + 1U);
    uStackY_40 = 0x4032d9;
    wcstombs(_bss,L".",iVar2 + 1U);
    uStackY_40 = 0x4032e9;
    setlocale(2,_Src);
    uStackY_40 = 0x4032f1;
    free(_Src);
    return _bss;
  }
  uStackY_40 = 0x40331f;
  local_28 = &stack0xffffffc4;
  mbstowcs((wchar_t *)0x0,param_1,0);
  uStackY_40 = 0x403330;
  uVar3 = ___chkstk_ms();
  iVar2 = -uVar3;
  *(undefined4 *)(&stack0xffffffcc + iVar2) = extraout_EDX;
  psVar1 = (short *)((int)asStack_30 + iVar2);
  *(short **)(&stack0xffffffc4 + iVar2) = psVar1;
  *(char **)(&stack0xffffffc8 + iVar2) = param_1;
  *(undefined4 *)((int)&uStackY_40 + iVar2) = 0x403349;
  uVar3 = mbstowcs(*(wchar_t **)(&stack0xffffffc4 + iVar2),*(char **)(&stack0xffffffc8 + iVar2),
                   *(size_t *)(&stack0xffffffcc + iVar2));
  local_2c = uVar3;
  psVar1[uVar3] = 0;
  local_22 = *psVar1;
  local_20 = psVar1;
  if (1 < uVar3) {
    if ((local_22 == 0x2f) || (local_22 == 0x5c)) {
      if ((local_22 == *(short *)((int)asStack_30 + iVar2 + 2)) &&
         (*(short *)((int)&local_2c + iVar2) == 0)) {
        *(char **)(&stack0xffffffc8 + iVar2) = _Src;
        *(undefined4 *)(&stack0xffffffc4 + iVar2) = 2;
        *(undefined4 *)((int)&uStackY_40 + iVar2) = 0x4035b0;
        setlocale(*(int *)(&stack0xffffffc4 + iVar2),*(char **)(&stack0xffffffc8 + iVar2));
        *(char **)(&stack0xffffffc4 + iVar2) = _Src;
        *(undefined4 *)((int)&uStackY_40 + iVar2) = 0x4035b8;
        free(*(void **)(&stack0xffffffc4 + iVar2));
        return param_1;
      }
    }
    else if (*(short *)((int)asStack_30 + iVar2 + 2) == 0x3a) {
      local_20 = (short *)((int)&local_2c + iVar2);
      local_22 = *(short *)((int)&local_2c + iVar2);
    }
  }
  psVar6 = local_20;
  psVar8 = local_20;
  psVar7 = local_20;
  sVar9 = local_22;
  if (local_22 == 0) goto LAB_00403290;
  do {
    while ((psVar4 = psVar8, sVar9 == 0x2f || (sVar9 == 0x5c))) {
      sVar9 = *psVar4;
      if (sVar9 != 0x2f) goto LAB_004033d1;
      do {
        do {
          psVar4 = psVar4 + 1;
          sVar9 = *psVar4;
        } while (sVar9 == 0x2f);
LAB_004033d1:
      } while (sVar9 == 0x5c);
      if (sVar9 == 0) goto LAB_004033ea;
      psVar8 = psVar4 + 1;
      psVar7 = psVar4;
      sVar9 = psVar4[1];
      if (psVar4[1] == 0) goto LAB_004033ea;
    }
    psVar8 = psVar4 + 1;
    sVar9 = psVar4[1];
  } while (psVar4[1] != 0);
LAB_004033ea:
  if (psVar7 <= local_20) {
    if ((local_22 != 0x2f) && (local_22 != 0x5c)) {
      *local_20 = 0x2e;
    }
    psVar6[1] = 0;
    *(undefined4 *)(&stack0xffffffcc + iVar2) = 0;
    *(short **)(&stack0xffffffc8 + iVar2) = psVar1;
    *(undefined4 *)(&stack0xffffffc4 + iVar2) = 0;
    *(undefined4 *)((int)&uStackY_40 + iVar2) = 0x403438;
    iVar5 = wcstombs(*(char **)(&stack0xffffffc4 + iVar2),*(wchar_t **)(&stack0xffffffc8 + iVar2),
                     *(size_t *)(&stack0xffffffcc + iVar2));
    *(short **)(&stack0xffffffc8 + iVar2) = (short *)(iVar5 + 1);
    local_20 = (short *)(iVar5 + 1);
    *(char **)(&stack0xffffffc4 + iVar2) = _bss;
    *(undefined4 *)((int)&uStackY_40 + iVar2) = 0x40344f;
    param_1 = (char *)realloc(*(void **)(&stack0xffffffc4 + iVar2),
                              *(size_t *)(&stack0xffffffc8 + iVar2));
    psVar6 = local_20;
    *(short **)(&stack0xffffffc8 + iVar2) = psVar1;
    *(char **)(&stack0xffffffc4 + iVar2) = param_1;
    *(short **)(&stack0xffffffcc + iVar2) = psVar6;
    *(undefined4 *)((int)&uStackY_40 + iVar2) = 0x403469;
    _bss = param_1;
    wcstombs(*(char **)(&stack0xffffffc4 + iVar2),*(wchar_t **)(&stack0xffffffc8 + iVar2),
             *(size_t *)(&stack0xffffffcc + iVar2));
    goto LAB_00403530;
  }
  do {
    psVar6 = psVar7 + -1;
    if (psVar6 <= local_20) {
      if ((local_20 == psVar6) &&
         ((((local_22 == 0x2f || (local_22 == 0x5c)) && (*psVar7 == local_22)) &&
          ((psVar7[1] != 0x2f && (psVar7[1] != 0x5c)))))) {
        psVar6 = psVar7;
      }
      break;
    }
    psVar8 = psVar7 + -1;
    psVar7 = psVar6;
  } while ((*psVar8 == 0x2f) || (*psVar8 == 0x5c));
  psVar6[1] = 0;
  sVar9 = *psVar1;
  psVar7 = psVar1;
  psVar6 = psVar1;
  psVar8 = psVar1;
  if ((sVar9 == 0x2f) || (sVar9 == 0x5c)) {
    do {
      do {
        psVar7 = psVar7 + 1;
      } while (*psVar7 == 0x2f);
    } while (*psVar7 == 0x5c);
    if ((int)psVar7 - (int)psVar1 < 6) goto LAB_004035bd;
  }
  else {
LAB_004035bd:
    if (*(short *)((int)asStack_30 + iVar2 + 2) == sVar9) {
      sVar9 = *psVar7;
      psVar6 = psVar7;
      psVar8 = psVar7;
    }
  }
  while (psVar7 = psVar6, psVar6 = psVar8, sVar9 != 0) {
    while( true ) {
      psVar8 = psVar6 + 1;
      *psVar6 = sVar9;
      psVar6 = psVar7;
      if ((sVar9 == 0x2f) || (psVar6 = psVar7 + 1, *psVar7 == 0x5c)) break;
      sVar9 = psVar7[1];
      psVar7 = psVar6;
      psVar6 = psVar8;
      if (sVar9 == 0) goto LAB_00403509;
    }
    sVar9 = *psVar6;
    if ((sVar9 == 0x5c) || (sVar9 == 0x2f)) {
      do {
        do {
          psVar6 = psVar6 + 1;
          sVar9 = *psVar6;
        } while (sVar9 == 0x2f);
      } while (sVar9 == 0x5c);
    }
  }
LAB_00403509:
  uVar3 = local_2c;
  *psVar8 = 0;
  *(short **)(&stack0xffffffc8 + iVar2) = psVar1;
  *(uint *)(&stack0xffffffcc + iVar2) = uVar3;
  *(char **)(&stack0xffffffc4 + iVar2) = param_1;
  *(undefined4 *)((int)&uStackY_40 + iVar2) = 0x403524;
  iVar5 = wcstombs(*(char **)(&stack0xffffffc4 + iVar2),*(wchar_t **)(&stack0xffffffc8 + iVar2),
                   *(size_t *)(&stack0xffffffcc + iVar2));
  if (iVar5 != -1) {
    param_1[iVar5] = '\0';
  }
LAB_00403530:
  *(char **)(&stack0xffffffc8 + iVar2) = _Src;
  *(undefined4 *)(&stack0xffffffc4 + iVar2) = 2;
  *(undefined4 *)((int)&uStackY_40 + iVar2) = 0x403540;
  setlocale(*(int *)(&stack0xffffffc4 + iVar2),*(char **)(&stack0xffffffc8 + iVar2));
  *(char **)(&stack0xffffffc4 + iVar2) = _Src;
  *(undefined4 *)((int)&uStackY_40 + iVar2) = 0x403548;
  free(*(void **)(&stack0xffffffc4 + iVar2));
  return param_1;
}



HANDLE __fastcall _text(undefined4 param_1,int param_2)

{
  char cVar1;
  ushort uVar2;
  LPCSTR in_EAX;
  HANDLE pvVar3;
  DWORD *pDVar4;
  DWORD DVar5;
  int *piVar6;
  char *pcVar7;
  _WIN32_FIND_DATAA local_14c;
  
  pvVar3 = _FindFirstFileA_8(in_EAX,&local_14c);
  if (pvVar3 == (HANDLE)0xffffffff) {
    pDVar4 = (DWORD *)__errno();
    DVar5 = _GetLastError_0();
    *pDVar4 = DVar5;
    if (DVar5 == 3) {
      piVar6 = __errno();
      *piVar6 = 2;
    }
    else {
      piVar6 = __errno();
      if (*piVar6 == 0x10b) {
        piVar6 = __errno();
        *piVar6 = 0x14;
      }
      else {
        piVar6 = __errno();
        if (*piVar6 != 2) {
          piVar6 = __errno();
          *piVar6 = 0x16;
        }
      }
    }
  }
  else {
    pcVar7 = (char *)(param_2 + 0xc);
    *(undefined2 *)(param_2 + 6) = 0;
    uVar2 = 0;
    while (cVar1 = local_14c.cFileName[uVar2], *pcVar7 = cVar1, cVar1 != '\0') {
      uVar2 = *(short *)(param_2 + 6) + 1;
      *(ushort *)(param_2 + 6) = uVar2;
      pcVar7 = pcVar7 + (uVar2 < 0x104);
    }
    if ((local_14c.dwFileAttributes & 0xffffff58) < 0x11) {
      *(DWORD *)(param_2 + 8) = local_14c.dwFileAttributes & 0xffffff58;
      return pvVar3;
    }
    *(undefined4 *)(param_2 + 8) = 0x18;
  }
  return pvVar3;
}



BOOL __fastcall FUN_00403710(undefined4 param_1,int param_2)

{
  char cVar1;
  ushort uVar2;
  HANDLE in_EAX;
  BOOL BVar3;
  DWORD DVar4;
  int *piVar5;
  char *pcVar6;
  _WIN32_FIND_DATAA local_14c;
  
  BVar3 = _FindNextFileA_8(in_EAX,&local_14c);
  if (BVar3 == 0) {
    DVar4 = _GetLastError_0();
    if (DVar4 != 0x12) {
      piVar5 = __errno();
      *piVar5 = 2;
      return 0;
    }
  }
  else {
    pcVar6 = (char *)(param_2 + 0xc);
    *(undefined2 *)(param_2 + 6) = 0;
    uVar2 = 0;
    while (cVar1 = local_14c.cFileName[uVar2], *pcVar6 = cVar1, cVar1 != '\0') {
      uVar2 = *(short *)(param_2 + 6) + 1;
      *(ushort *)(param_2 + 6) = uVar2;
      pcVar6 = pcVar6 + (uVar2 < 0x104);
    }
    if (0x10 < (local_14c.dwFileAttributes & 0xffffff58)) {
      *(undefined4 *)(param_2 + 8) = 0x18;
      return BVar3;
    }
    *(DWORD *)(param_2 + 8) = local_14c.dwFileAttributes & 0xffffff58;
  }
  return BVar3;
}



undefined4 * __cdecl ___mingw_opendir(char *param_1)

{
  char *pcVar1;
  int iVar2;
  char *pcVar3;
  uint *puVar4;
  undefined4 *puVar5;
  HANDLE pvVar6;
  int *piVar7;
  undefined4 extraout_ECX;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  char acStack_124 [4];
  uint local_120 [68];
  
  if (param_1 == (char *)0x0) {
    piVar7 = __errno();
    puVar5 = (undefined4 *)0x0;
    *piVar7 = 0x16;
  }
  else if (*param_1 == '\0') {
    piVar7 = __errno();
    puVar5 = (undefined4 *)0x0;
    *piVar7 = 2;
  }
  else {
    __fullpath((char *)local_120,param_1,0x104);
    puVar10 = local_120;
    if ((char)local_120[0] == '\0') {
      do {
        puVar4 = puVar10;
        puVar10 = puVar4 + 1;
        uVar8 = *puVar4 + 0xfefefeff & ~*puVar4;
        uVar9 = uVar8 & 0x80808080;
      } while (uVar9 == 0);
      if ((uVar8 & 0x8080) == 0) {
        uVar9 = uVar9 >> 0x10;
        puVar10 = (uint *)((int)puVar4 + 6);
      }
      pcVar3 = (char *)((int)puVar10 +
                       ((-3 - (uint)CARRY1((byte)uVar9,(byte)uVar9)) - (int)local_120));
    }
    else {
      do {
        puVar4 = puVar10;
        puVar10 = puVar4 + 1;
        uVar8 = *puVar4 + 0xfefefeff & ~*puVar4;
        uVar9 = uVar8 & 0x80808080;
      } while (uVar9 == 0);
      if ((uVar8 & 0x8080) == 0) {
        uVar9 = uVar9 >> 0x10;
        puVar10 = (uint *)((int)puVar4 + 6);
      }
      pcVar3 = (char *)((int)puVar10 +
                       ((-3 - (uint)CARRY1((byte)uVar9,(byte)uVar9)) - (int)local_120));
      if ((acStack_124[(int)(pcVar3 + 3)] != '/') && (acStack_124[(int)(pcVar3 + 3)] != '\\')) {
        pcVar1 = (char *)((int)local_120 + (int)pcVar3);
        pcVar1[0] = '\\';
        pcVar1[1] = '\0';
        pcVar3 = pcVar3 + 1;
      }
    }
    pcVar3 = (char *)((int)local_120 + (int)pcVar3);
    pcVar3[0] = '*';
    pcVar3[1] = '\0';
    puVar10 = local_120;
    do {
      puVar4 = puVar10;
      puVar10 = puVar4 + 1;
      uVar8 = *puVar4 + 0xfefefeff & ~*puVar4;
      uVar9 = uVar8 & 0x80808080;
    } while (uVar9 == 0);
    if ((uVar8 & 0x8080) == 0) {
      uVar9 = uVar9 >> 0x10;
      puVar10 = (uint *)((int)puVar4 + 6);
    }
    iVar2 = (-3 - (uint)CARRY1((byte)uVar9,(byte)uVar9)) - (int)local_120;
    puVar5 = (undefined4 *)malloc((size_t)((int)puVar10 + iVar2 + 0x11c));
    if (puVar5 == (undefined4 *)0x0) {
      piVar7 = __errno();
      *piVar7 = 0xc;
    }
    else {
      memcpy(puVar5 + 0x46,local_120,(size_t)((int)puVar10 + iVar2 + 1));
      pvVar6 = _text(extraout_ECX,(int)puVar5);
      puVar5[0x44] = pvVar6;
      if (pvVar6 == (HANDLE)0xffffffff) {
        free(puVar5);
        puVar5 = (undefined4 *)0x0;
      }
      else {
        puVar5[0x45] = 0;
        *puVar5 = 0;
        *(undefined2 *)(puVar5 + 1) = 0x110;
      }
    }
  }
  return puVar5;
}



int __thiscall ___mingw_readdir(void *this,int param_1)

{
  int iVar1;
  BOOL BVar2;
  int *piVar3;
  
  if (param_1 == 0) {
    piVar3 = __errno();
    *piVar3 = 9;
    param_1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x114);
    *(int *)(param_1 + 0x114) = iVar1 + 1;
    if ((0 < iVar1) && (BVar2 = FUN_00403710(this,param_1), BVar2 == 0)) {
      return 0;
    }
  }
  return param_1;
}



undefined4 __cdecl ___mingw_closedir(void *param_1)

{
  BOOL BVar1;
  int *piVar2;
  
  if ((param_1 != (void *)0x0) &&
     (BVar1 = _FindClose_4(*(HANDLE *)((int)param_1 + 0x110)), BVar1 != 0)) {
    free(param_1);
    return 0;
  }
  piVar2 = __errno();
  *piVar2 = 9;
  return 0xffffffff;
}



void __cdecl ___mingw_rewinddir(int param_1)

{
  BOOL BVar1;
  int *piVar2;
  HANDLE pvVar3;
  undefined4 extraout_ECX;
  
  if ((param_1 != 0) && (BVar1 = _FindClose_4(*(HANDLE *)(param_1 + 0x110)), BVar1 != 0)) {
    pvVar3 = _text(extraout_ECX,param_1);
    *(HANDLE *)(param_1 + 0x110) = pvVar3;
    if (pvVar3 == (HANDLE)0xffffffff) {
      return;
    }
    *(undefined4 *)(param_1 + 0x114) = 0;
    return;
  }
  piVar2 = __errno();
  *piVar2 = 9;
  return;
}



// wcstombs

void __cdecl wcstombs(char *param_1,wchar_t *param_2,size_t param_3)

{
                    // WARNING: Could not recover jumptable at 0x00403b30. Too many branches
                    // WARNING: Treating indirect jump as call
  wcstombs(param_1,param_2,param_3);
  return;
}



// vfprintf

void __cdecl vfprintf(FILE *param_1,char *param_2,va_list param_3)

{
                    // WARNING: Could not recover jumptable at 0x00403b38. Too many branches
                    // WARNING: Treating indirect jump as call
  vfprintf(param_1,param_2,param_3);
  return;
}



// tolower

void __cdecl tolower(int param_1)

{
                    // WARNING: Could not recover jumptable at 0x00403b40. Too many branches
                    // WARNING: Treating indirect jump as call
  tolower(param_1);
  return;
}



// strlen

void __cdecl strlen(char *param_1)

{
                    // WARNING: Could not recover jumptable at 0x00403b48. Too many branches
                    // WARNING: Treating indirect jump as call
  strlen(param_1);
  return;
}



// strcoll

void __cdecl strcoll(char *param_1,char *param_2)

{
                    // WARNING: Could not recover jumptable at 0x00403b50. Too many branches
                    // WARNING: Treating indirect jump as call
  strcoll(param_1,param_2);
  return;
}



// strcmp

void __cdecl strcmp(char *param_1,char *param_2)

{
                    // WARNING: Could not recover jumptable at 0x00403b58. Too many branches
                    // WARNING: Treating indirect jump as call
  strcmp(param_1,param_2);
  return;
}



// signal

void __cdecl signal(int param_1)

{
                    // WARNING: Could not recover jumptable at 0x00403b60. Too many branches
                    // WARNING: Treating indirect jump as call
  signal(param_1);
  return;
}



// setlocale

void __cdecl setlocale(int param_1,char *param_2)

{
                    // WARNING: Could not recover jumptable at 0x00403b68. Too many branches
                    // WARNING: Treating indirect jump as call
  setlocale(param_1,param_2);
  return;
}



// scanf

void __cdecl scanf(char *param_1)

{
                    // WARNING: Could not recover jumptable at 0x00403b70. Too many branches
                    // WARNING: Treating indirect jump as call
  scanf(param_1);
  return;
}



// realloc

void __cdecl realloc(void *param_1,size_t param_2)

{
                    // WARNING: Could not recover jumptable at 0x00403b78. Too many branches
                    // WARNING: Treating indirect jump as call
  realloc(param_1,param_2);
  return;
}



// puts

void __cdecl puts(char *param_1)

{
                    // WARNING: Could not recover jumptable at 0x00403b80. Too many branches
                    // WARNING: Treating indirect jump as call
  puts(param_1);
  return;
}



// printf

void __cdecl printf(char *param_1)

{
                    // WARNING: Could not recover jumptable at 0x00403b88. Too many branches
                    // WARNING: Treating indirect jump as call
  printf(param_1);
  return;
}



// memcpy

void __cdecl memcpy(void *param_1,void *param_2,size_t param_3)

{
                    // WARNING: Could not recover jumptable at 0x00403b90. Too many branches
                    // WARNING: Treating indirect jump as call
  memcpy(param_1,param_2,param_3);
  return;
}



// mbstowcs

void __cdecl mbstowcs(wchar_t *param_1,char *param_2,size_t param_3)

{
                    // WARNING: Could not recover jumptable at 0x00403b98. Too many branches
                    // WARNING: Treating indirect jump as call
  mbstowcs(param_1,param_2,param_3);
  return;
}



// malloc

void __cdecl malloc(size_t param_1)

{
                    // WARNING: Could not recover jumptable at 0x00403ba0. Too many branches
                    // WARNING: Treating indirect jump as call
  malloc(param_1);
  return;
}



// fwrite

void __cdecl fwrite(void *param_1,size_t param_2,size_t param_3,FILE *param_4)

{
                    // WARNING: Could not recover jumptable at 0x00403ba8. Too many branches
                    // WARNING: Treating indirect jump as call
  fwrite(param_1,param_2,param_3,param_4);
  return;
}



// free

void __cdecl free(void *param_1)

{
                    // WARNING: Could not recover jumptable at 0x00403bb0. Too many branches
                    // WARNING: Treating indirect jump as call
  free(param_1);
  return;
}



// calloc

void __cdecl calloc(size_t param_1,size_t param_2)

{
                    // WARNING: Could not recover jumptable at 0x00403bb8. Too many branches
                    // WARNING: Treating indirect jump as call
  calloc(param_1,param_2);
  return;
}



// abort

void __cdecl abort(void)

{
                    // WARNING: Could not recover jumptable at 0x00403bc0. Too many branches
                    // WARNING: Subroutine does not return
                    // WARNING: Treating indirect jump as call
  abort();
  return;
}



int __cdecl __setmode(int _FileHandle,int _Mode)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x00403bc8. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = _setmode(_FileHandle,_Mode);
  return iVar1;
}



int __cdecl __isctype(int _C,int _Type)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x00403bd0. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = _isctype(_C,_Type);
  return iVar1;
}



char * __cdecl __fullpath(char *_FullPath,char *_Path,size_t _SizeInBytes)

{
  char *pcVar1;
  
                    // WARNING: Could not recover jumptable at 0x00403bd8. Too many branches
                    // WARNING: Treating indirect jump as call
  pcVar1 = _fullpath(_FullPath,_Path,_SizeInBytes);
  return pcVar1;
}



int * __cdecl __errno(void)

{
  int *piVar1;
  
                    // WARNING: Could not recover jumptable at 0x00403be0. Too many branches
                    // WARNING: Treating indirect jump as call
  piVar1 = _errno();
  return piVar1;
}



void __cdecl __cexit(void)

{
                    // WARNING: Could not recover jumptable at 0x00403be8. Too many branches
                    // WARNING: Treating indirect jump as call
  _cexit();
  return;
}



void ___p__fmode(void)

{
                    // WARNING: Could not recover jumptable at 0x00403bf0. Too many branches
                    // WARNING: Treating indirect jump as call
  __p__fmode();
  return;
}



void ___p__environ(void)

{
                    // WARNING: Could not recover jumptable at 0x00403bf8. Too many branches
                    // WARNING: Treating indirect jump as call
  __p__environ();
  return;
}



int __cdecl
___getmainargs(int *_Argc,char ***_Argv,char ***_Env,int _DoWildCard,_startupinfo *_StartInfo)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x00403c00. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = __getmainargs(_Argc,_Argv,_Env,_DoWildCard,_StartInfo);
  return iVar1;
}



SIZE_T _VirtualQuery_12(LPCVOID lpAddress,PMEMORY_BASIC_INFORMATION lpBuffer,SIZE_T dwLength)

{
  SIZE_T SVar1;
  
                    // WARNING: Could not recover jumptable at 0x00403c08. Too many branches
                    // WARNING: Treating indirect jump as call
  SVar1 = VirtualQuery(lpAddress,lpBuffer,dwLength);
  return SVar1;
}



BOOL _VirtualProtect_16(LPVOID lpAddress,SIZE_T dwSize,DWORD flNewProtect,PDWORD lpflOldProtect)

{
  BOOL BVar1;
  
                    // WARNING: Could not recover jumptable at 0x00403c10. Too many branches
                    // WARNING: Treating indirect jump as call
  BVar1 = VirtualProtect(lpAddress,dwSize,flNewProtect,lpflOldProtect);
  return BVar1;
}



LPVOID _TlsGetValue_4(DWORD dwTlsIndex)

{
  LPVOID pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x00403c18. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = TlsGetValue(dwTlsIndex);
  return pvVar1;
}



LPTOP_LEVEL_EXCEPTION_FILTER
_SetUnhandledExceptionFilter_4(LPTOP_LEVEL_EXCEPTION_FILTER lpTopLevelExceptionFilter)

{
  LPTOP_LEVEL_EXCEPTION_FILTER pPVar1;
  
                    // WARNING: Could not recover jumptable at 0x00403c20. Too many branches
                    // WARNING: Treating indirect jump as call
  pPVar1 = SetUnhandledExceptionFilter(lpTopLevelExceptionFilter);
  return pPVar1;
}



HMODULE _LoadLibraryA_4(LPCSTR lpLibFileName)

{
  HMODULE pHVar1;
  
                    // WARNING: Could not recover jumptable at 0x00403c28. Too many branches
                    // WARNING: Treating indirect jump as call
  pHVar1 = LoadLibraryA(lpLibFileName);
  return pHVar1;
}



void _LeaveCriticalSection_4(LPCRITICAL_SECTION lpCriticalSection)

{
                    // WARNING: Could not recover jumptable at 0x00403c30. Too many branches
                    // WARNING: Treating indirect jump as call
  LeaveCriticalSection(lpCriticalSection);
  return;
}



void _InitializeCriticalSection_4(LPCRITICAL_SECTION lpCriticalSection)

{
                    // WARNING: Could not recover jumptable at 0x00403c38. Too many branches
                    // WARNING: Treating indirect jump as call
  InitializeCriticalSection(lpCriticalSection);
  return;
}



FARPROC _GetProcAddress_8(HMODULE hModule,LPCSTR lpProcName)

{
  FARPROC pFVar1;
  
                    // WARNING: Could not recover jumptable at 0x00403c40. Too many branches
                    // WARNING: Treating indirect jump as call
  pFVar1 = GetProcAddress(hModule,lpProcName);
  return pFVar1;
}



HMODULE _GetModuleHandleA_4(LPCSTR lpModuleName)

{
  HMODULE pHVar1;
  
                    // WARNING: Could not recover jumptable at 0x00403c48. Too many branches
                    // WARNING: Treating indirect jump as call
  pHVar1 = GetModuleHandleA(lpModuleName);
  return pHVar1;
}



DWORD _GetLastError_0(void)

{
  DWORD DVar1;
  
                    // WARNING: Could not recover jumptable at 0x00403c50. Too many branches
                    // WARNING: Treating indirect jump as call
  DVar1 = GetLastError();
  return DVar1;
}



LPSTR _GetCommandLineA_0(void)

{
  LPSTR pCVar1;
  
                    // WARNING: Could not recover jumptable at 0x00403c58. Too many branches
                    // WARNING: Treating indirect jump as call
  pCVar1 = GetCommandLineA();
  return pCVar1;
}



BOOL _FreeLibrary_4(HMODULE hLibModule)

{
  BOOL BVar1;
  
                    // WARNING: Could not recover jumptable at 0x00403c60. Too many branches
                    // WARNING: Treating indirect jump as call
  BVar1 = FreeLibrary(hLibModule);
  return BVar1;
}



BOOL _FindNextFileA_8(HANDLE hFindFile,LPWIN32_FIND_DATAA lpFindFileData)

{
  BOOL BVar1;
  
                    // WARNING: Could not recover jumptable at 0x00403c68. Too many branches
                    // WARNING: Treating indirect jump as call
  BVar1 = FindNextFileA(hFindFile,lpFindFileData);
  return BVar1;
}



HANDLE _FindFirstFileA_8(LPCSTR lpFileName,LPWIN32_FIND_DATAA lpFindFileData)

{
  HANDLE pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x00403c70. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = FindFirstFileA(lpFileName,lpFindFileData);
  return pvVar1;
}



BOOL _FindClose_4(HANDLE hFindFile)

{
  BOOL BVar1;
  
                    // WARNING: Could not recover jumptable at 0x00403c78. Too many branches
                    // WARNING: Treating indirect jump as call
  BVar1 = FindClose(hFindFile);
  return BVar1;
}



void _ExitProcess_4(UINT uExitCode)

{
                    // WARNING: Could not recover jumptable at 0x00403c80. Too many branches
                    // WARNING: Subroutine does not return
                    // WARNING: Treating indirect jump as call
  ExitProcess(uExitCode);
  return;
}



void _EnterCriticalSection_4(LPCRITICAL_SECTION lpCriticalSection)

{
                    // WARNING: Could not recover jumptable at 0x00403c88. Too many branches
                    // WARNING: Treating indirect jump as call
  EnterCriticalSection(lpCriticalSection);
  return;
}



void _DeleteCriticalSection_4(LPCRITICAL_SECTION lpCriticalSection)

{
                    // WARNING: Could not recover jumptable at 0x00403c90. Too many branches
                    // WARNING: Treating indirect jump as call
  DeleteCriticalSection(lpCriticalSection);
  return;
}



// stricoll

int __cdecl _stricoll(char *_Str1,char *_Str2)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x00403c98. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = _stricoll(_Str1,_Str2);
  return iVar1;
}



// strdup

char * __cdecl _strdup(char *_Src)

{
  char *pcVar1;
  
                    // WARNING: Could not recover jumptable at 0x00403ca0. Too many branches
                    // WARNING: Treating indirect jump as call
  pcVar1 = _strdup(_Src);
  return pcVar1;
}




