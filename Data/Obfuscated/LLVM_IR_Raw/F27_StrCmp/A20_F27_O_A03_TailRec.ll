@.str = constant [4 x i8] c"%d\0A\00"
define dso_local i32 @qH3(i8* %0, i8* %1) {
  %3 = alloca i8*
  %4 = alloca i8*
  store i8* %0, i8** %3
  store i8* %1, i8** %4
  %5 = load i8*, i8** %3
  %6 = load i8, i8* %5
  %7 = sext i8 %6 to i32
  %8 = icmp eq i32 %7, 0
  br i1 %8, label %17, label %9
9:
  %10 = load i8*, i8** %3
  %11 = load i8, i8* %10
  %12 = sext i8 %11 to i32
  %13 = load i8*, i8** %4
  %14 = load i8, i8* %13
  %15 = sext i8 %14 to i32
  %16 = icmp ne i32 %12, %15
  br i1 %16, label %17, label %25
17:
  %18 = load i8*, i8** %3
  %19 = load i8, i8* %18
  %20 = zext i8 %19 to i32
  %21 = load i8*, i8** %4
  %22 = load i8, i8* %21
  %23 = zext i8 %22 to i32
  %24 = sub nsw i32 %20, %23
  br label %31
25:
  %26 = load i8*, i8** %3
  %27 = getelementptr inbounds i8, i8* %26, i64 1
  %28 = load i8*, i8** %4
  %29 = getelementptr inbounds i8, i8* %28, i64 1
  %30 = call i32 @qH3(i8* %27, i8* %29)
  br label %31
31:
  %32 = phi i32 [ %24, %17 ], [ %30, %25 ]
  ret i32 %32
}
define dso_local i32 @KO(i8* %0, i8* %1) {
  %3 = alloca i8*
  %4 = alloca i8*
  store i8* %0, i8** %3
  store i8* %1, i8** %4
  %5 = load i8*, i8** %3
  %6 = load i8*, i8** %4
  %7 = call i32 @qH3(i8* %5, i8* %6)
  ret i32 %7
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
  %16 = call i32 @KO(i8* %12, i8* %15)
  %17 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str, i64 0, i64 0), i32 %16)
  store i32 0, i32* %3
  br label %18
18:
  %19 = load i32, i32* %3
  ret i32 %19
}
declare i32 @printf(i8*, ...)
