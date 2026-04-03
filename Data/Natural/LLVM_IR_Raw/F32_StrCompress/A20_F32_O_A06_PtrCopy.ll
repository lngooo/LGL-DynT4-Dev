@.str = constant [5 x i8] c"%c%d\00"
@.str.1 = constant [2 x i8] c"\0A\00"
define dso_local void @StrCompress(i8* %0) {
  %2 = alloca i8*
  %3 = alloca i8*
  %4 = alloca i32
  %5 = alloca i8
  %6 = alloca i8*
  store i8* %0, i8** %2
  %8 = load i8*, i8** %2
  store i8* %8, i8** %3
  br label %9
9:
  %10 = load i8*, i8** %3
  %11 = load i8, i8* %10
  %12 = icmp ne i8 %11, 0
  br i1 %12, label %13, label %39
13:
  store i32 0, i32* %4
  %15 = load i8*, i8** %3
  %16 = load i8, i8* %15
  store i8 %16, i8* %5
  %18 = load i8*, i8** %3
  store i8* %18, i8** %6
  br label %19
19:
  %20 = load i8*, i8** %6
  %21 = load i8, i8* %20
  %22 = sext i8 %21 to i32
  %23 = load i8, i8* %5
  %24 = sext i8 %23 to i32
  %25 = icmp eq i32 %22, %24
  br i1 %25, label %26, label %31
26:
  %27 = load i32, i32* %4
  %28 = add nsw i32 %27, 1
  store i32 %28, i32* %4
  %29 = load i8*, i8** %6
  %30 = getelementptr inbounds i8, i8* %29, i32 1
  store i8* %30, i8** %6
  br label %19
31:
  %32 = load i8, i8* %5
  %33 = sext i8 %32 to i32
  %34 = load i32, i32* %4
  %35 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([5 x i8], [5 x i8]* @.str, i64 0, i64 0), i32 %33, i32 %34)
  %36 = load i8*, i8** %6
  store i8* %36, i8** %3
  br label %9
39:
  %40 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([2 x i8], [2 x i8]* @.str.1, i64 0, i64 0))
  ret void
}
declare i32 @printf(i8*, ...)
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
  br label %13
9:
  %10 = load i8**, i8*** %5
  %11 = getelementptr inbounds i8*, i8** %10, i64 1
  %12 = load i8*, i8** %11
  call void @StrCompress(i8* %12)
  store i32 0, i32* %3
  br label %13
13:
  %14 = load i32, i32* %3
  ret i32 %14
}
