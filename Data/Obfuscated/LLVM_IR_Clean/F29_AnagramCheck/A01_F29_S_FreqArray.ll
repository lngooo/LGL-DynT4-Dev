define dso_local i32 @TXw(i8* %0, i8* %1) {
  %3 = alloca i32
  %4 = alloca i8*
  %5 = alloca i8*
  %6 = alloca [256 x i32]
  %7 = alloca i32
  %8 = alloca i32
  %9 = alloca i32
  store i8* %0, i8** %4
  store i8* %1, i8** %5
  %10 = load i8*, i8** %4
  %11 = call i64 @strlen(i8* %10)
  %12 = load i8*, i8** %5
  %13 = call i64 @strlen(i8* %12)
  %14 = icmp ne i64 %11, %13
  br i1 %14, label %15, label %16
15:
  store i32 0, i32* %3
  br label %75
16:
  call void @llvm.memset.p0i8.i64(i8* align 16 %18, i8 0, i64 1024, i1 false)
  store i32 0, i32* %7
  br label %20
20:
  %21 = load i8*, i8** %4
  %22 = load i32, i32* %7
  %23 = sext i32 %22 to i64
  %24 = getelementptr inbounds i8, i8* %21, i64 %23
  %25 = load i8, i8* %24
  %26 = sext i8 %25 to i32
  %27 = icmp ne i32 %26, 0
  br i1 %27, label %30, label %28
28:
  br label %52
30:
  %31 = load i8*, i8** %4
  %32 = load i32, i32* %7
  %33 = sext i32 %32 to i64
  %34 = getelementptr inbounds i8, i8* %31, i64 %33
  %35 = load i8, i8* %34
  %36 = zext i8 %35 to i64
  %37 = getelementptr inbounds [256 x i32], [256 x i32]* %6, i64 0, i64 %36
  %38 = load i32, i32* %37
  %39 = add nsw i32 %38, 1
  store i32 %39, i32* %37
  %40 = load i8*, i8** %5
  %41 = load i32, i32* %7
  %42 = sext i32 %41 to i64
  %43 = getelementptr inbounds i8, i8* %40, i64 %42
  %44 = load i8, i8* %43
  %45 = zext i8 %44 to i64
  %46 = getelementptr inbounds [256 x i32], [256 x i32]* %6, i64 0, i64 %45
  %47 = load i32, i32* %46
  %48 = add nsw i32 %47, -1
  store i32 %48, i32* %46
  br label %49
49:
  %50 = load i32, i32* %7
  %51 = add nsw i32 %50, 1
  store i32 %51, i32* %7
  br label %20
52:
  store i32 0, i32* %8
  br label %54
54:
  %55 = load i32, i32* %8
  %56 = icmp slt i32 %55, 256
  br i1 %56, label %58, label %57
57:
  store i32 5, i32* %9
  br label %69
58:
  %59 = load i32, i32* %8
  %60 = sext i32 %59 to i64
  %61 = getelementptr inbounds [256 x i32], [256 x i32]* %6, i64 0, i64 %60
  %62 = load i32, i32* %61
  %63 = icmp ne i32 %62, 0
  br i1 %63, label %64, label %65
64:
  store i32 0, i32* %3
  store i32 1, i32* %9
  br label %69
65:
  br label %66
66:
  %67 = load i32, i32* %8
  %68 = add nsw i32 %67, 1
  store i32 %68, i32* %8
  br label %54
69:
  %71 = load i32, i32* %9
  switch i32 %71, label %73 [
    i32 5, label %72
  ]
72:
  store i32 1, i32* %3
  store i32 1, i32* %9
  br label %73
73:
  br label %75
75:
  %76 = load i32, i32* %3
  ret i32 %76
}
declare i64 @strlen(i8*)
declare void @llvm.memset.p0i8.i64(i8* nocapture writeonly, i8, i64, i1 immarg)
