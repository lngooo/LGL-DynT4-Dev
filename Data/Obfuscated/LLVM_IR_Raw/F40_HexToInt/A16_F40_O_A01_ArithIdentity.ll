@.str = constant [3 x i8] c"%d\00"
define dso_local i32 @Blm(i8* %0) {
  %2 = alloca i8*
  %3 = alloca i32
  %4 = alloca i32
  store i8* %0, i8** %2
  store i32 0, i32* %3
  br label %6
6:
  %7 = load i8*, i8** %2
  %8 = load i8, i8* %7
  %9 = icmp ne i8 %8, 0
  br i1 %9, label %10, label %38
10:
  %12 = load i8*, i8** %2
  %13 = load i8, i8* %12
  %14 = sext i8 %13 to i32
  %15 = icmp sle i32 %14, 57
  br i1 %15, label %16, label %21
16:
  %17 = load i8*, i8** %2
  %18 = load i8, i8* %17
  %19 = sext i8 %18 to i32
  %20 = sub nsw i32 %19, 48
  br label %28
21:
  %22 = load i8*, i8** %2
  %23 = load i8, i8* %22
  %24 = sext i8 %23 to i32
  %25 = or i32 %24, 32
  %26 = sub nsw i32 %25, 97
  %27 = add nsw i32 %26, 10
  br label %28
28:
  %29 = phi i32 [ %20, %16 ], [ %27, %21 ]
  store i32 %29, i32* %4
  %30 = load i32, i32* %3
  %31 = shl i32 %30, 4
  store i32 %31, i32* %3
  %32 = load i32, i32* %3
  %33 = load i32, i32* %4
  %34 = add nsw i32 %32, %33
  store i32 %34, i32* %3
  %35 = load i8*, i8** %2
  %36 = getelementptr inbounds i8, i8* %35, i32 1
  store i8* %36, i8** %2
  br label %6
38:
  %39 = load i32, i32* %3
  ret i32 %39
}
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
  br label %15
9:
  %10 = load i8**, i8*** %5
  %11 = getelementptr inbounds i8*, i8** %10, i64 1
  %12 = load i8*, i8** %11
  %13 = call i32 @Blm(i8* %12)
  %14 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([3 x i8], [3 x i8]* @.str, i64 0, i64 0), i32 %13)
  store i32 0, i32* %3
  br label %15
15:
  %16 = load i32, i32* %3
  ret i32 %16
}
declare i32 @printf(i8*, ...)
