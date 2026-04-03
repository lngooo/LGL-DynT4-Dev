@.str = constant [4 x i8] c"%s\0A\00"
define dso_local void @TXM(i8** %0, i32 %1, i8* %2) {
  %4 = alloca i8**
  %5 = alloca i32
  %6 = alloca i8*
  %7 = alloca i32
  %8 = alloca i8
  %9 = alloca i32
  %10 = alloca i32
  %11 = alloca i32
  store i8** %0, i8*** %4
  store i32 %1, i32* %5
  store i8* %2, i8** %6
  store i32 0, i32* %7
  br label %13
13:
  br label %14
14:
  %15 = load i8**, i8*** %4
  %16 = getelementptr inbounds i8*, i8** %15, i64 0
  %17 = load i8*, i8** %16
  %18 = load i32, i32* %7
  %19 = sext i32 %18 to i64
  %20 = getelementptr inbounds i8, i8* %17, i64 %19
  %21 = load i8, i8* %20
  store i8 %21, i8* %8
  %22 = load i8, i8* %8
  %23 = sext i8 %22 to i32
  %24 = xor i32 %23, 0
  %25 = icmp ne i32 %24, 0
  br i1 %25, label %27, label %26
26:
  store i32 3, i32* %9
  br label %69
27:
  store i32 1, i32* %10
  store i32 1, i32* %11
  br label %30
30:
  %31 = load i32, i32* %10
  %32 = load i32, i32* %5
  %33 = icmp slt i32 %31, %32
  br i1 %33, label %34, label %53
34:
  %35 = load i8**, i8*** %4
  %36 = load i32, i32* %10
  %37 = sext i32 %36 to i64
  %38 = getelementptr inbounds i8*, i8** %35, i64 %37
  %39 = load i8*, i8** %38
  %40 = load i32, i32* %7
  %41 = sext i32 %40 to i64
  %42 = getelementptr inbounds i8, i8* %39, i64 %41
  %43 = load i8, i8* %42
  %44 = sext i8 %43 to i32
  %45 = load i8, i8* %8
  %46 = sext i8 %45 to i32
  %47 = xor i32 %44, %46
  %48 = icmp ne i32 %47, 0
  br i1 %48, label %49, label %50
49:
  store i32 0, i32* %11
  br label %53
50:
  %51 = load i32, i32* %10
  %52 = add nsw i32 %51, 1
  store i32 %52, i32* %10
  br label %30
53:
  %54 = load i32, i32* %11
  %55 = icmp ne i32 %54, 0
  br i1 %55, label %56, label %64
56:
  %57 = load i8, i8* %8
  %58 = load i8*, i8** %6
  %59 = load i32, i32* %7
  %60 = sext i32 %59 to i64
  %61 = getelementptr inbounds i8, i8* %58, i64 %60
  store i8 %57, i8* %61
  %62 = load i32, i32* %7
  %63 = add nsw i32 %62, 1
  store i32 %63, i32* %7
  br label %65
64:
  store i32 3, i32* %9
  br label %66
65:
  store i32 0, i32* %9
  br label %66
66:
  br label %69
69:
  %70 = load i32, i32* %9
  switch i32 %70, label %78 [
    i32 0, label %71
    i32 3, label %72
  ]
71:
  br label %13
72:
  %73 = load i8*, i8** %6
  %74 = load i32, i32* %7
  %75 = sext i32 %74 to i64
  %76 = getelementptr inbounds i8, i8* %73, i64 %75
  store i8 0, i8* %76
  ret void
78:
  unreachable
}
define dso_local i32 @main(i32 %0, i8** %1) {
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i8**
  %6 = alloca i32
  %7 = alloca i8**
  %8 = alloca [128 x i8]
  store i32 0, i32* %3
  store i32 %0, i32* %4
  store i8** %1, i8*** %5
  %9 = load i32, i32* %4
  %10 = icmp slt i32 %9, 2
  br i1 %10, label %11, label %12
11:
  store i32 0, i32* %3
  br label %29
12:
  %14 = load i32, i32* %4
  %15 = sub nsw i32 %14, 1
  store i32 %15, i32* %6
  %17 = load i8**, i8*** %5
  %18 = getelementptr inbounds i8*, i8** %17, i64 1
  store i8** %18, i8*** %7
  call void @llvm.memset.p0i8.i64(i8* align 16 %20, i8 0, i64 128, i1 false)
  %21 = load i8**, i8*** %7
  %22 = load i32, i32* %6
  %23 = getelementptr inbounds [128 x i8], [128 x i8]* %8, i64 0, i64 0
  call void @TXM(i8** %21, i32 %22, i8* %23)
  %24 = getelementptr inbounds [128 x i8], [128 x i8]* %8, i64 0, i64 0
  %25 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str, i64 0, i64 0), i8* %24)
  store i32 0, i32* %3
  br label %29
29:
  %30 = load i32, i32* %3
  ret i32 %30
}
declare void @llvm.memset.p0i8.i64(i8* nocapture writeonly, i8, i64, i1 immarg)
declare i32 @printf(i8*, ...)
