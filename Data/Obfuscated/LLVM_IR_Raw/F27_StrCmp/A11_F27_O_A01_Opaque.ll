@.str = constant [4 x i8] c"%d\0A\00"
define dso_local i32 @UMWN(i8* %0, i8* %1) {
  %3 = alloca i8*
  %4 = alloca i8*
  %5 = alloca i32
  %6 = alloca i32
  store i8* %0, i8** %3
  store i8* %1, i8** %4
  store i32 5, i32* %5
  store i32 10, i32* %6
  br label %9
9:
  %10 = load i8*, i8** %3
  %11 = load i8, i8* %10
  %12 = sext i8 %11 to i32
  %13 = icmp ne i32 %12, 0
  br i1 %13, label %14, label %22
14:
  %15 = load i8*, i8** %3
  %16 = load i8, i8* %15
  %17 = sext i8 %16 to i32
  %18 = load i8*, i8** %4
  %19 = load i8, i8* %18
  %20 = sext i8 %19 to i32
  %21 = icmp eq i32 %17, %20
  br label %22
22:
  %23 = phi i1 [ false, %9 ], [ %21, %14 ]
  br i1 %23, label %24, label %35
24:
  %25 = load i32, i32* %5
  %26 = load i32, i32* %6
  %27 = add nsw i32 %25, %26
  %28 = icmp slt i32 %27, 5
  br i1 %28, label %29, label %30
29:
  br label %35
30:
  %31 = load i8*, i8** %3
  %32 = getelementptr inbounds i8, i8* %31, i32 1
  store i8* %32, i8** %3
  %33 = load i8*, i8** %4
  %34 = getelementptr inbounds i8, i8* %33, i32 1
  store i8* %34, i8** %4
  br label %9
35:
  %36 = load i8*, i8** %3
  %37 = load i8, i8* %36
  %38 = zext i8 %37 to i32
  %39 = load i8*, i8** %4
  %40 = load i8, i8* %39
  %41 = zext i8 %40 to i32
  %42 = sub nsw i32 %38, %41
  ret i32 %42
}
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
  %16 = call i32 @UMWN(i8* %12, i8* %15)
  %17 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str, i64 0, i64 0), i32 %16)
  store i32 0, i32* %3
  br label %18
18:
  %19 = load i32, i32* %3
  ret i32 %19
}
declare i32 @printf(i8*, ...)
