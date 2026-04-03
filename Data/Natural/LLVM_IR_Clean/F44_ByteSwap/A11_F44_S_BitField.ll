%struct.Bytes = type { i32 }
define dso_local i32 @ByteSwap(i32 %0) {
  %2 = alloca i32
  %3 = alloca %struct.Bytes*
  %4 = alloca i32
  %5 = alloca %struct.Bytes*
  store i32 %0, i32* %2
  store %struct.Bytes* %7, %struct.Bytes** %3
  store %struct.Bytes* %10, %struct.Bytes** %5
  %11 = load %struct.Bytes*, %struct.Bytes** %3
  %13 = load i32, i32* %12
  %14 = lshr i32 %13, 24
  %15 = load %struct.Bytes*, %struct.Bytes** %5
  %17 = load i32, i32* %16
  %18 = and i32 %14, 255
  %19 = and i32 %17, -256
  %20 = or i32 %19, %18
  store i32 %20, i32* %16
  %21 = load %struct.Bytes*, %struct.Bytes** %3
  %23 = load i32, i32* %22
  %24 = lshr i32 %23, 16
  %25 = and i32 %24, 255
  %26 = load %struct.Bytes*, %struct.Bytes** %5
  %28 = load i32, i32* %27
  %29 = and i32 %25, 255
  %30 = shl i32 %29, 8
  %31 = and i32 %28, -65281
  %32 = or i32 %31, %30
  store i32 %32, i32* %27
  %33 = load %struct.Bytes*, %struct.Bytes** %3
  %35 = load i32, i32* %34
  %36 = lshr i32 %35, 8
  %37 = and i32 %36, 255
  %38 = load %struct.Bytes*, %struct.Bytes** %5
  %40 = load i32, i32* %39
  %41 = and i32 %37, 255
  %42 = shl i32 %41, 16
  %43 = and i32 %40, -16711681
  %44 = or i32 %43, %42
  store i32 %44, i32* %39
  %45 = load %struct.Bytes*, %struct.Bytes** %3
  %47 = load i32, i32* %46
  %48 = and i32 %47, 255
  %49 = load %struct.Bytes*, %struct.Bytes** %5
  %51 = load i32, i32* %50
  %52 = and i32 %48, 255
  %53 = shl i32 %52, 24
  %54 = and i32 %51, 16777215
  %55 = or i32 %54, %53
  store i32 %55, i32* %50
  %56 = load i32, i32* %4
  ret i32 %56
}
