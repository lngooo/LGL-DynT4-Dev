@.str = constant [5 x i8] c"%c%d\00"
@.str.1 = constant [2 x i8] c"\0A\00"
define dso_local void @StrCompress(i8* %0) {
  %2 = alloca i8*
  %3 = alloca i8
  %4 = alloca i32
  %5 = alloca i8*
  store i8* %0, i8** %2
  br label %6
6:
  %7 = load i8*, i8** %2
  %8 = load i8, i8* %7
  %9 = icmp ne i8 %8, 0
  br i1 %9, label %10, label %43
10:
  %11 = load i8*, i8** %2
  %12 = load i8, i8* %11
  store i8 %12, i8* %3
  store i32 0, i32* %4
  %15 = load i8*, i8** %2
  store i8* %15, i8** %5
  br label %16
16:
  %17 = load i8*, i8** %5
  %18 = load i8, i8* %17
  %19 = sext i8 %18 to i32
  %20 = icmp ne i32 %19, 0
  br i1 %20, label %21, label %28
21:
  %22 = load i8*, i8** %5
  %23 = load i8, i8* %22
  %24 = sext i8 %23 to i32
  %25 = load i8, i8* %3
  %26 = sext i8 %25 to i32
  %27 = icmp eq i32 %24, %26
  br label %28
28:
  %29 = phi i1 [ false, %16 ], [ %27, %21 ]
  br i1 %29, label %30, label %35
30:
  %31 = load i32, i32* %4
  %32 = add nsw i32 %31, 1
  store i32 %32, i32* %4
  %33 = load i8*, i8** %5
  %34 = getelementptr inbounds i8, i8* %33, i32 1
  store i8* %34, i8** %5
  br label %16
35:
  %36 = load i8, i8* %3
  %37 = sext i8 %36 to i32
  %38 = load i32, i32* %4
  %39 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([5 x i8], [5 x i8]* @.str, i64 0, i64 0), i32 %37, i32 %38)
  %40 = load i8*, i8** %5
  store i8* %40, i8** %2
  br label %6
43:
  %44 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([2 x i8], [2 x i8]* @.str.1, i64 0, i64 0))
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
