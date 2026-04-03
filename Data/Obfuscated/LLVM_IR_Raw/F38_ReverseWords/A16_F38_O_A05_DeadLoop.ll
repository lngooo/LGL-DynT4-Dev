@.str = constant [2 x i8] c" \00"
@.str.1 = constant [4 x i8] c"%s\0A\00"
define dso_local void @aIzk(i8* %0) {
  %2 = alloca i8*
  %3 = alloca i8*
  %4 = alloca i8*
  %5 = alloca i8*
  %6 = alloca i8
  %7 = alloca i8*
  %8 = alloca i8*
  %9 = alloca i8*
  %10 = alloca i8*
  %11 = alloca i8
  store i8* %0, i8** %2
  %13 = load i8*, i8** %2
  store i8* %13, i8** %3
  br label %14
14:
  %15 = load i8*, i8** %3
  %16 = load i8, i8* %15
  %17 = icmp ne i8 %16, 0
  br i1 %17, label %18, label %21
18:
  %19 = load i8*, i8** %3
  %20 = getelementptr inbounds i8, i8* %19, i32 1
  store i8* %20, i8** %3
  br label %14
21:
  %23 = load i8*, i8** %2
  store i8* %23, i8** %4
  %25 = load i8*, i8** %3
  %26 = getelementptr inbounds i8, i8* %25, i64 -1
  store i8* %26, i8** %5
  br label %27
27:
  %28 = load i8*, i8** %4
  %29 = load i8*, i8** %5
  %30 = icmp ult i8* %28, %29
  br i1 %30, label %31, label %41
31:
  %32 = load i8*, i8** %4
  %33 = load i8, i8* %32
  store i8 %33, i8* %6
  %34 = load i8*, i8** %5
  %35 = load i8, i8* %34
  %36 = load i8*, i8** %4
  %37 = getelementptr inbounds i8, i8* %36, i32 1
  store i8* %37, i8** %4
  store i8 %35, i8* %36
  %38 = load i8, i8* %6
  %39 = load i8*, i8** %5
  %40 = getelementptr inbounds i8, i8* %39, i32 -1
  store i8* %40, i8** %5
  store i8 %38, i8* %39
  br label %27
41:
  %43 = load i8*, i8** %2
  store i8* %43, i8** %7
  %45 = load i8*, i8** %2
  store i8* %45, i8** %8
  br label %46
46:
  %47 = load i8*, i8** %8
  %48 = load i8*, i8** %3
  %49 = icmp ule i8* %47, %48
  br i1 %49, label %52, label %50
50:
  br label %91
52:
  %53 = load i8*, i8** %8
  %54 = load i8, i8* %53
  %55 = sext i8 %54 to i32
  %56 = icmp eq i32 %55, 32
  br i1 %56, label %62, label %57
57:
  %58 = load i8*, i8** %8
  %59 = load i8, i8* %58
  %60 = sext i8 %59 to i32
  %61 = icmp eq i32 %60, 0
  br i1 %61, label %62, label %87
62:
  %64 = load i8*, i8** %7
  store i8* %64, i8** %9
  %66 = load i8*, i8** %8
  %67 = getelementptr inbounds i8, i8* %66, i64 -1
  store i8* %67, i8** %10
  br label %68
68:
  %69 = load i8*, i8** %9
  %70 = load i8*, i8** %10
  %71 = icmp ult i8* %69, %70
  br i1 %71, label %72, label %82
72:
  %73 = load i8*, i8** %9
  %74 = load i8, i8* %73
  store i8 %74, i8* %11
  %75 = load i8*, i8** %10
  %76 = load i8, i8* %75
  %77 = load i8*, i8** %9
  %78 = getelementptr inbounds i8, i8* %77, i32 1
  store i8* %78, i8** %9
  store i8 %76, i8* %77
  %79 = load i8, i8* %11
  %80 = load i8*, i8** %10
  %81 = getelementptr inbounds i8, i8* %80, i32 -1
  store i8* %81, i8** %10
  store i8 %79, i8* %80
  br label %68
82:
  %83 = load i8*, i8** %8
  %84 = getelementptr inbounds i8, i8* %83, i64 1
  store i8* %84, i8** %7
  br label %87
87:
  br label %88
88:
  %89 = load i8*, i8** %8
  %90 = getelementptr inbounds i8, i8* %89, i32 1
  store i8* %90, i8** %8
  br label %46
91:
  ret void
}
define dso_local i32 @main(i32 %0, i8** %1) {
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i8**
  %6 = alloca [512 x i8]
  %7 = alloca i32
  store i32 0, i32* %3
  store i32 %0, i32* %4
  store i8** %1, i8*** %5
  %8 = load i32, i32* %4
  %9 = icmp slt i32 %8, 2
  br i1 %9, label %10, label %11
10:
  store i32 0, i32* %3
  br label %45
11:
  call void @llvm.memset.p0i8.i64(i8* align 16 %13, i8 0, i64 512, i1 false)
  store i32 1, i32* %7
  br label %15
15:
  %16 = load i32, i32* %7
  %17 = load i32, i32* %4
  %18 = icmp slt i32 %16, %17
  br i1 %18, label %21, label %19
19:
  br label %40
21:
  %22 = getelementptr inbounds [512 x i8], [512 x i8]* %6, i64 0, i64 0
  %23 = load i8**, i8*** %5
  %24 = load i32, i32* %7
  %25 = sext i32 %24 to i64
  %26 = getelementptr inbounds i8*, i8** %23, i64 %25
  %27 = load i8*, i8** %26
  %28 = call i8* @strcat(i8* %22, i8* %27)
  %29 = load i32, i32* %7
  %30 = load i32, i32* %4
  %31 = sub nsw i32 %30, 1
  %32 = icmp slt i32 %29, %31
  br i1 %32, label %33, label %36
33:
  %34 = getelementptr inbounds [512 x i8], [512 x i8]* %6, i64 0, i64 0
  %35 = call i8* @strcat(i8* %34, i8* getelementptr inbounds ([2 x i8], [2 x i8]* @.str, i64 0, i64 0))
  br label %36
36:
  br label %37
37:
  %38 = load i32, i32* %7
  %39 = add nsw i32 %38, 1
  store i32 %39, i32* %7
  br label %15
40:
  %41 = getelementptr inbounds [512 x i8], [512 x i8]* %6, i64 0, i64 0
  call void @aIzk(i8* %41)
  %42 = getelementptr inbounds [512 x i8], [512 x i8]* %6, i64 0, i64 0
  %43 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str.1, i64 0, i64 0), i8* %42)
  store i32 0, i32* %3
  br label %45
45:
  %46 = load i32, i32* %3
  ret i32 %46
}
declare void @llvm.memset.p0i8.i64(i8* nocapture writeonly, i8, i64, i1 immarg)
declare i8* @strcat(i8*, i8*)
declare i32 @printf(i8*, ...)
