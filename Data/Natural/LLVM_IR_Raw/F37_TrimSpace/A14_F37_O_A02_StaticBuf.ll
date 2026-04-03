@g_buf = internal global [4096 x i8] zeroinitializer
@.str = constant [4 x i8] c"%s\0A\00"
define dso_local void @TrimSpace(i8* %0) {
  %2 = alloca i8*
  %3 = alloca i32
  %4 = alloca i8*
  store i8* %0, i8** %2
  store i32 0, i32* %3
  %7 = load i8*, i8** %2
  store i8* %7, i8** %4
  br label %8
8:
  %9 = load i8*, i8** %4
  %10 = load i8, i8* %9
  %11 = icmp ne i8 %10, 0
  br i1 %11, label %12, label %38
12:
  %13 = load i8*, i8** %4
  %14 = load i8, i8* %13
  %15 = sext i8 %14 to i32
  %16 = icmp ne i32 %15, 32
  br i1 %16, label %17, label %35
17:
  %18 = load i8*, i8** %4
  %19 = load i8, i8* %18
  %20 = sext i8 %19 to i32
  %21 = icmp ne i32 %20, 9
  br i1 %21, label %22, label %35
22:
  %23 = load i8*, i8** %4
  %24 = load i8, i8* %23
  %25 = sext i8 %24 to i32
  %26 = icmp ne i32 %25, 10
  br i1 %26, label %27, label %35
27:
  %28 = load i8*, i8** %4
  %29 = load i8, i8* %28
  %30 = load i32, i32* %3
  %31 = sext i32 %30 to i64
  %32 = getelementptr inbounds i8, i8* getelementptr inbounds ([4096 x i8], [4096 x i8]* @g_buf, i64 0, i64 0), i64 %31
  store i8 %29, i8* %32
  %33 = load i32, i32* %3
  %34 = add nsw i32 %33, 1
  store i32 %34, i32* %3
  br label %35
35:
  %36 = load i8*, i8** %4
  %37 = getelementptr inbounds i8, i8* %36, i32 1
  store i8* %37, i8** %4
  br label %8
38:
  %39 = load i32, i32* %3
  %40 = sext i32 %39 to i64
  %41 = getelementptr inbounds i8, i8* getelementptr inbounds ([4096 x i8], [4096 x i8]* @g_buf, i64 0, i64 0), i64 %40
  store i8 0, i8* %41
  %42 = load i8*, i8** %2
  %43 = call i8* @strcpy(i8* %42, i8* getelementptr inbounds ([4096 x i8], [4096 x i8]* @g_buf, i64 0, i64 0))
  ret void
}
declare i8* @strcpy(i8*, i8*)
define dso_local i32 @main(i32 %0, i8** %1) {
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i8**
  store i32 0, i32* %3
  store i32 %0, i32* %4
  store i8** %1, i8*** %5
  %6 = load i32, i32* %4
  %7 = icmp slt i32 %6, 2
  br i1 %7, label %8, label %9
8:
  store i32 0, i32* %3
  br label %17
9:
  %10 = load i8**, i8*** %5
  %11 = getelementptr inbounds i8*, i8** %10, i64 1
  %12 = load i8*, i8** %11
  call void @TrimSpace(i8* %12)
  %13 = load i8**, i8*** %5
  %14 = getelementptr inbounds i8*, i8** %13, i64 1
  %15 = load i8*, i8** %14
  %16 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str, i64 0, i64 0), i8* %15)
  store i32 0, i32* %3
  br label %17
17:
  %18 = load i32, i32* %3
  ret i32 %18
}
declare i32 @printf(i8*, ...)
