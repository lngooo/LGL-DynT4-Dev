@.str = constant [4 x i8] c"%d\0A\00"
define dso_local i32 @AnagramCheck(i8* %0, i8* %1) {
  %3 = alloca i32
  %4 = alloca i8*
  %5 = alloca i8*
  %6 = alloca i32
  %7 = alloca [256 x i32]
  %8 = alloca i32
  %9 = alloca i32
  store i8* %0, i8** %4
  store i8* %1, i8** %5
  store i32 0, i32* %6
  call void @llvm.memset.p0i8.i64(i8* align 16 %12, i8 0, i64 1024, i1 false)
  store i32 0, i32* %8
  br label %14
14:
  %15 = load i32, i32* %6
  %16 = icmp ne i32 %15, -1
  br i1 %16, label %17, label %76
17:
  %18 = load i32, i32* %6
  switch i32 %18, label %75 [
    i32 0, label %19
    i32 1, label %27
    i32 2, label %57
    i32 3, label %58
    i32 4, label %73
    i32 5, label %74
  ]
19:
  %20 = load i8*, i8** %4
  %21 = call i64 @strlen(i8* %20)
  %22 = load i8*, i8** %5
  %23 = call i64 @strlen(i8* %22)
  %24 = icmp ne i64 %21, %23
  %25 = zext i1 %24 to i64
  %26 = select i1 %24, i32 4, i32 1
  store i32 %26, i32* %6
  br label %75
27:
  %28 = load i8*, i8** %4
  %29 = load i32, i32* %8
  %30 = sext i32 %29 to i64
  %31 = getelementptr inbounds i8, i8* %28, i64 %30
  %32 = load i8, i8* %31
  %33 = icmp ne i8 %32, 0
  br i1 %33, label %34, label %55
34:
  %35 = load i8*, i8** %4
  %36 = load i32, i32* %8
  %37 = sext i32 %36 to i64
  %38 = getelementptr inbounds i8, i8* %35, i64 %37
  %39 = load i8, i8* %38
  %40 = zext i8 %39 to i64
  %41 = getelementptr inbounds [256 x i32], [256 x i32]* %7, i64 0, i64 %40
  %42 = load i32, i32* %41
  %43 = add nsw i32 %42, 1
  store i32 %43, i32* %41
  %44 = load i8*, i8** %5
  %45 = load i32, i32* %8
  %46 = sext i32 %45 to i64
  %47 = getelementptr inbounds i8, i8* %44, i64 %46
  %48 = load i8, i8* %47
  %49 = zext i8 %48 to i64
  %50 = getelementptr inbounds [256 x i32], [256 x i32]* %7, i64 0, i64 %49
  %51 = load i32, i32* %50
  %52 = add nsw i32 %51, -1
  store i32 %52, i32* %50
  %53 = load i32, i32* %8
  %54 = add nsw i32 %53, 1
  store i32 %54, i32* %8
  br label %56
55:
  store i32 2, i32* %6
  br label %56
56:
  br label %75
57:
  store i32 0, i32* %8
  store i32 3, i32* %6
  br label %75
58:
  %59 = load i32, i32* %8
  %60 = icmp slt i32 %59, 256
  br i1 %60, label %61, label %71
61:
  %62 = load i32, i32* %8
  %63 = sext i32 %62 to i64
  %64 = getelementptr inbounds [256 x i32], [256 x i32]* %7, i64 0, i64 %63
  %65 = load i32, i32* %64
  %66 = icmp ne i32 %65, 0
  br i1 %66, label %67, label %68
67:
  store i32 0, i32* %3
  store i32 1, i32* %9
  br label %77
68:
  %69 = load i32, i32* %8
  %70 = add nsw i32 %69, 1
  store i32 %70, i32* %8
  br label %72
71:
  store i32 5, i32* %6
  br label %72
72:
  br label %75
73:
  store i32 0, i32* %3
  store i32 1, i32* %9
  br label %77
74:
  store i32 1, i32* %3
  store i32 1, i32* %9
  br label %77
75:
  br label %14
76:
  store i32 0, i32* %3
  store i32 1, i32* %9
  br label %77
77:
  %81 = load i32, i32* %3
  ret i32 %81
}
declare void @llvm.memset.p0i8.i64(i8* nocapture writeonly, i8, i64, i1 immarg)
declare i64 @strlen(i8*)
define dso_local i32 @main(i32 %0, i8** %1) {
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i8**
  store i32 0, i32* %3
  store i32 %0, i32* %4
  store i8** %1, i8*** %5
  %6 = load i32, i32* %4
  %7 = icmp slt i32 %6, 3
  br i1 %7, label %8, label %9
8:
  store i32 0, i32* %3
  br label %18
9:
  %10 = load i8**, i8*** %5
  %11 = getelementptr inbounds i8*, i8** %10, i64 1
  %12 = load i8*, i8** %11
  %13 = load i8**, i8*** %5
  %14 = getelementptr inbounds i8*, i8** %13, i64 2
  %15 = load i8*, i8** %14
  %16 = call i32 @AnagramCheck(i8* %12, i8* %15)
  %17 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str, i64 0, i64 0), i32 %16)
  store i32 0, i32* %3
  br label %18
18:
  %19 = load i32, i32* %3
  ret i32 %19
}
declare i32 @printf(i8*, ...)
