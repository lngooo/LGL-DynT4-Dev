@.str = constant [3 x i8] c"%d\00"
define dso_local i32 @vh(i8* %0, i32 %1) {
  %3 = alloca i32
  %4 = alloca i8*
  %5 = alloca i32
  %6 = alloca i32
  store i8* %0, i8** %4
  store i32 %1, i32* %5
  %7 = load i32, i32* %5
  %8 = icmp slt i32 %7, 0
  br i1 %8, label %9, label %10
9:
  store i32 0, i32* %3
  br label %38
10:
  %12 = load i8*, i8** %4
  %13 = load i32, i32* %5
  %14 = sext i32 %13 to i64
  %15 = getelementptr inbounds i8, i8* %12, i64 %14
  %16 = load i8, i8* %15
  %17 = sext i8 %16 to i32
  %18 = or i32 %17, 32
  store i32 %18, i32* %6
  %19 = load i32, i32* %6
  %20 = icmp sge i32 %19, 97
  br i1 %20, label %21, label %25
21:
  %22 = load i32, i32* %6
  %23 = sub nsw i32 %22, 97
  %24 = add nsw i32 %23, 10
  br label %28
25:
  %26 = load i32, i32* %6
  %27 = sub nsw i32 %26, 48
  br label %28
28:
  %29 = phi i32 [ %24, %21 ], [ %27, %25 ]
  store i32 %29, i32* %6
  %30 = load i32, i32* %6
  %31 = load i8*, i8** %4
  %32 = load i32, i32* %5
  %33 = sub nsw i32 %32, 1
  %34 = call i32 @vh(i8* %31, i32 %33)
  %35 = mul nsw i32 %34, 16
  %36 = add nsw i32 %30, %35
  store i32 %36, i32* %3
  br label %38
38:
  %39 = load i32, i32* %3
  ret i32 %39
}
define dso_local i32 @RH7(i8* %0) {
  %2 = alloca i8*
  store i8* %0, i8** %2
  %3 = load i8*, i8** %2
  %4 = load i8*, i8** %2
  %5 = call i64 @strlen(i8* %4)
  %6 = trunc i64 %5 to i32
  %7 = sub nsw i32 %6, 1
  %8 = call i32 @vh(i8* %3, i32 %7)
  ret i32 %8
}
declare i64 @strlen(i8*)
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
  %13 = call i32 @RH7(i8* %12)
  %14 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([3 x i8], [3 x i8]* @.str, i64 0, i64 0), i32 %13)
  store i32 0, i32* %3
  br label %15
15:
  %16 = load i32, i32* %3
  ret i32 %16
}
declare i32 @printf(i8*, ...)
