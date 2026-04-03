@.str = constant [5 x i8] c"%c%d\00"
@.str.1 = constant [4 x i8] c"%s\0A\00"
define dso_local void @ze1(i8* %0, i8* %1) {
  %3 = alloca i8*
  %4 = alloca i8*
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32
  store i8* %0, i8** %3
  store i8* %1, i8** %4
  store i32 0, i32* %5
  store i32 0, i32* %6
  %12 = load i8*, i8** %3
  %13 = call i64 @strlen(i8* %12)
  %14 = trunc i64 %13 to i32
  store i32 %14, i32* %7
  br label %15
15:
  %16 = load i32, i32* %5
  %17 = load i32, i32* %7
  %18 = icmp slt i32 %16, %17
  br i1 %18, label %19, label %66
19:
  store i32 1, i32* %8
  br label %21
21:
  %22 = load i32, i32* %5
  %23 = add nsw i32 %22, 1
  %24 = load i32, i32* %7
  %25 = icmp slt i32 %23, %24
  br i1 %25, label %26, label %41
26:
  %27 = load i8*, i8** %3
  %28 = load i32, i32* %5
  %29 = sext i32 %28 to i64
  %30 = getelementptr inbounds i8, i8* %27, i64 %29
  %31 = load i8, i8* %30
  %32 = sext i8 %31 to i32
  %33 = load i8*, i8** %3
  %34 = load i32, i32* %5
  %35 = add nsw i32 %34, 1
  %36 = sext i32 %35 to i64
  %37 = getelementptr inbounds i8, i8* %33, i64 %36
  %38 = load i8, i8* %37
  %39 = sext i8 %38 to i32
  %40 = icmp eq i32 %32, %39
  br label %41
41:
  %42 = phi i1 [ false, %21 ], [ %40, %26 ]
  br i1 %42, label %43, label %48
43:
  %44 = load i32, i32* %8
  %45 = add nsw i32 %44, 1
  store i32 %45, i32* %8
  %46 = load i32, i32* %5
  %47 = add nsw i32 %46, 1
  store i32 %47, i32* %5
  br label %21
48:
  %49 = load i8*, i8** %4
  %50 = load i32, i32* %6
  %51 = sext i32 %50 to i64
  %52 = getelementptr inbounds i8, i8* %49, i64 %51
  %53 = load i8*, i8** %3
  %54 = load i32, i32* %5
  %55 = sext i32 %54 to i64
  %56 = getelementptr inbounds i8, i8* %53, i64 %55
  %57 = load i8, i8* %56
  %58 = sext i8 %57 to i32
  %59 = load i32, i32* %8
  %60 = call i32 (i8*, i8*, ...) @sprintf(i8* %52, i8* getelementptr inbounds ([5 x i8], [5 x i8]* @.str, i64 0, i64 0), i32 %58, i32 %59)
  %61 = load i32, i32* %6
  %62 = add nsw i32 %61, %60
  store i32 %62, i32* %6
  %63 = load i32, i32* %5
  %64 = add nsw i32 %63, 1
  store i32 %64, i32* %5
  br label %15
66:
  ret void
}
declare i64 @strlen(i8*)
declare i32 @sprintf(i8*, i8*, ...)
define dso_local i32 @main(i32 %0, i8** %1) {
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i8**
  %6 = alloca i8*
  %7 = alloca [256 x i8]
  store i32 0, i32* %3
  store i32 %0, i32* %4
  store i8** %1, i8*** %5
  %8 = load i32, i32* %4
  %9 = icmp slt i32 %8, 2
  br i1 %9, label %10, label %11
10:
  store i32 0, i32* %3
  br label %24
11:
  %13 = load i8**, i8*** %5
  %14 = getelementptr inbounds i8*, i8** %13, i64 1
  %15 = load i8*, i8** %14
  store i8* %15, i8** %6
  call void @llvm.memset.p0i8.i64(i8* align 16 %17, i8 0, i64 256, i1 false)
  %18 = load i8*, i8** %6
  %19 = getelementptr inbounds [256 x i8], [256 x i8]* %7, i64 0, i64 0
  call void @ze1(i8* %18, i8* %19)
  %20 = getelementptr inbounds [256 x i8], [256 x i8]* %7, i64 0, i64 0
  %21 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str.1, i64 0, i64 0), i8* %20)
  store i32 0, i32* %3
  br label %24
24:
  %25 = load i32, i32* %3
  ret i32 %25
}
declare void @llvm.memset.p0i8.i64(i8* nocapture writeonly, i8, i64, i1 immarg)
declare i32 @printf(i8*, ...)
