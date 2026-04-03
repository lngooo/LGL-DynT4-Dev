@.str = constant [3 x i8] c"%d\00"
@.str.1 = constant [4 x i8] c"%s\0A\00"
define dso_local void @W(i8* %0, i8* %1) {
  %3 = alloca i8*
  %4 = alloca i8*
  %5 = alloca i8*
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i8
  store i8* %0, i8** %3
  store i8* %1, i8** %4
  %10 = load i8*, i8** %3
  store i8* %10, i8** %5
  store i32 0, i32* %6
  br label %12
12:
  %13 = load i8*, i8** %5
  %14 = load i8, i8* %13
  %15 = icmp ne i8 %14, 0
  br i1 %15, label %16, label %53
16:
  store i32 0, i32* %7
  %18 = load i8*, i8** %5
  %19 = load i8, i8* %18
  store i8 %19, i8* %8
  br label %20
20:
  %21 = load i8*, i8** %5
  %22 = load i32, i32* %7
  %23 = sext i32 %22 to i64
  %24 = getelementptr inbounds i8, i8* %21, i64 %23
  %25 = load i8, i8* %24
  %26 = sext i8 %25 to i32
  %27 = load i8, i8* %8
  %28 = sext i8 %27 to i32
  %29 = icmp eq i32 %26, %28
  br i1 %29, label %30, label %33
30:
  %31 = load i32, i32* %7
  %32 = add nsw i32 %31, 1
  store i32 %32, i32* %7
  br label %20
33:
  %34 = load i8, i8* %8
  %35 = load i8*, i8** %4
  %36 = load i32, i32* %6
  %37 = add nsw i32 %36, 1
  store i32 %37, i32* %6
  %38 = sext i32 %36 to i64
  %39 = getelementptr inbounds i8, i8* %35, i64 %38
  store i8 %34, i8* %39
  %40 = load i8*, i8** %4
  %41 = load i32, i32* %6
  %42 = sext i32 %41 to i64
  %43 = getelementptr inbounds i8, i8* %40, i64 %42
  %44 = load i32, i32* %7
  %45 = call i32 (i8*, i8*, ...) @sprintf(i8* %43, i8* getelementptr inbounds ([3 x i8], [3 x i8]* @.str, i64 0, i64 0), i32 %44)
  %46 = load i32, i32* %6
  %47 = add nsw i32 %46, %45
  store i32 %47, i32* %6
  %48 = load i32, i32* %7
  %49 = load i8*, i8** %5
  %50 = sext i32 %48 to i64
  %51 = getelementptr inbounds i8, i8* %49, i64 %50
  store i8* %51, i8** %5
  br label %12
53:
  %54 = load i8*, i8** %4
  %55 = load i32, i32* %6
  %56 = sext i32 %55 to i64
  %57 = getelementptr inbounds i8, i8* %54, i64 %56
  store i8 0, i8* %57
  ret void
}
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
  call void @W(i8* %18, i8* %19)
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
