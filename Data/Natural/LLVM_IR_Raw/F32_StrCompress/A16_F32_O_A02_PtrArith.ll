@.str = constant [5 x i8] c"%c%d\00"
@.str.1 = constant [2 x i8] c"\0A\00"
define dso_local void @StrCompress(i8* %0) {
  %2 = alloca i8*
  %3 = alloca i8*
  %4 = alloca i8*
  store i8* %0, i8** %2
  %6 = load i8*, i8** %2
  store i8* %6, i8** %3
  br label %7
7:
  %8 = load i8*, i8** %3
  %9 = load i8, i8* %8
  %10 = icmp ne i8 %9, 0
  br i1 %10, label %11, label %41
11:
  %13 = load i8*, i8** %3
  store i8* %13, i8** %4
  br label %14
14:
  %15 = load i8*, i8** %4
  %16 = getelementptr inbounds i8, i8* %15, i64 1
  %17 = load i8, i8* %16
  %18 = sext i8 %17 to i32
  %19 = load i8*, i8** %3
  %20 = load i8, i8* %19
  %21 = sext i8 %20 to i32
  %22 = icmp eq i32 %18, %21
  br i1 %22, label %23, label %26
23:
  %24 = load i8*, i8** %4
  %25 = getelementptr inbounds i8, i8* %24, i32 1
  store i8* %25, i8** %4
  br label %14
26:
  %27 = load i8*, i8** %3
  %28 = load i8, i8* %27
  %29 = sext i8 %28 to i32
  %30 = load i8*, i8** %4
  %31 = load i8*, i8** %3
  %32 = ptrtoint i8* %30 to i64
  %33 = ptrtoint i8* %31 to i64
  %34 = sub i64 %32, %33
  %35 = add nsw i64 %34, 1
  %36 = trunc i64 %35 to i32
  %37 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([5 x i8], [5 x i8]* @.str, i64 0, i64 0), i32 %29, i32 %36)
  %38 = load i8*, i8** %4
  %39 = getelementptr inbounds i8, i8* %38, i64 1
  store i8* %39, i8** %3
  br label %7
41:
  %42 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([2 x i8], [2 x i8]* @.str.1, i64 0, i64 0))
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
