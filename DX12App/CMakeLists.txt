

set(targetName DX12App)
ReMake_AddTarget(
        TARGET_NAME ${targetName}
        MODE EXE
        LIB ResetCore_Framework
            ResetCore_CommonLib
)

WithWinMain(${targetName})

ReMake_StartUse()
UseDirectX12(${targetName})
ReMake_EndUse()