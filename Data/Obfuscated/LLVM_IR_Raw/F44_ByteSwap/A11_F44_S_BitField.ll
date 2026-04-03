%struct.Wsy2 = type { i32 }
@.str = constant [4 x i8] c"%u\0A\00"
define dso_local i32 @oJ(i32 %0) {
  %2 = alloca i32
  %3 = alloca %struct.Wsy2*
  %4 = alloca i32
  %5 = alloca %struct.Wsy2*
  store i32 %0, i32* %2
  store %struct.Wsy2* %7, %struct.Wsy2** %3
  store %struct.Wsy2* %10, %struct.Wsy2** %5
  %11 = load %struct.Wsy2*, %struct.Wsy2** %3
  %13 = load i32, i32* %12
  %14 = lshr i32 %13, 24
  %15 = load %struct.Wsy2*, %struct.Wsy2** %5
  %17 = load i32, i32* %16
  %18 = and i32 %14, 255
  %19 = and i32 %17, -256
  %20 = or i32 %19, %18
  store i32 %20, i32* %16
  %21 = load %struct.Wsy2*, %struct.Wsy2** %3
  %23 = load i32, i32* %22
  %24 = lshr i32 %23, 16
  %25 = and i32 %24, 255
  %26 = load %struct.Wsy2*, %struct.Wsy2** %5
  %28 = load i32, i32* %27
  %29 = and i32 %25, 255
  %30 = shl i32 %29, 8
  %31 = and i32 %28, -65281
  %32 = or i32 %31, %30
  store i32 %32, i32* %27
  %33 = load %struct.Wsy2*, %struct.Wsy2** %3
  %35 = load i32, i32* %34
  %36 = lshr i32 %35, 8
  %37 = and i32 %36, 255
  %38 = load %struct.Wsy2*, %struct.Wsy2** %5
  %40 = load i32, i32* %39
  %41 = and i32 %37, 255
  %42 = shl i32 %41, 16
  %43 = and i32 %40, -16711681
  %44 = or i32 %43, %42
  store i32 %44, i32* %39
  %45 = load %struct.Wsy2*, %struct.Wsy2** %3
  %47 = load i32, i32* %46
  %48 = and i32 %47, 255
  %49 = load %struct.Wsy2*, %struct.Wsy2** %5
  %51 = load i32, i32* %50
  %52 = and i32 %48, 255
  %53 = shl i32 %52, 24
  %54 = and i32 %51, 16777215
  %55 = or i32 %54, %53
  store i32 %55, i32* %50
  %56 = load i32, i32* %4
  ret i32 %56
}
define dso_local i32 @main(i32 %0, i8** %1) {
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i8**
  %6 = alloca i32
  store i32 0, i32* %3
  store i32 %0, i32* %4
  store i8** %1, i8*** %5
  %7 = load i32, i32* %4
  %8 = icmp slt i32 %7, 2
  br i1 %8, label %9, label %10
9:
  store i32 0, i32* %3
  br label %21
10:
  %12 = load i8**, i8*** %5
  %13 = getelementptr inbounds i8*, i8** %12, i64 1
  %14 = load i8*, i8** %13
  %15 = call i64 @strtoul(i8* %14, i8** null, i32 10)
  %16 = trunc i64 %15 to i32
  store i32 %16, i32* %6
  %17 = load i32, i32* %6
  %18 = call i32 @oJ(i32 %17)
  %19 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str, i64 0, i64 0), i32 %18)
  store i32 0, i32* %3
  br label %21
21:
  %22 = load i32, i32* %3
  ret i32 %22
}
declare i64 @strtoul(i8*, i8**, i32)
declare i32 @printf(i8*, ...)
