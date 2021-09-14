

set(targetName DX12App)
ReMake_AddTarget(
        TARGET_NAME ${targetName}
        MODE EXE
)

WithWinMain(${targetName})

ReMake_StartUse()
UseDirectX12(${targetName})
ReMake_EndUse()