@.str = constant [3 x i8] c"%d\00"
define dso_local i32 @Hn(i8* %0, i32 %1) {
  %3 = alloca i32
  %4 = alloca i8*
  %5 = alloca i32
  %6 = alloca i8
  %7 = alloca i32
  store i8* %0, i8** %4
  store i32 %1, i32* %5
  %8 = load i32, i32* %5
  %9 = icmp eq i32 %8, 0
  br i1 %9, label %10, label %11
10:
  store i32 0, i32* %3
  br label %52
11:
  %12 = load i8*, i8** %4
  %13 = load i32, i32* %5
  %14 = sub nsw i32 %13, 1
  %15 = sext i32 %14 to i64
  %16 = getelementptr inbounds i8, i8* %12, i64 %15
  %17 = load i8, i8* %16
  store i8 %17, i8* %6
  %19 = load i8, i8* %6
  %20 = sext i8 %19 to i32
  %21 = icmp sge i32 %20, 97
  br i1 %21, label %22, label %27
22:
  %23 = load i8, i8* %6
  %24 = sext i8 %23 to i32
  %25 = sub nsw i32 %24, 97
  %26 = add nsw i32 %25, 10
  br label %42
27:
  %28 = load i8, i8* %6
  %29 = sext i8 %28 to i32
  %30 = icmp sge i32 %29, 65
  br i1 %30, label %31, label %36
31:
  %32 = load i8, i8* %6
  %33 = sext i8 %32 to i32
  %34 = sub nsw i32 %33, 65
  %35 = add nsw i32 %34, 10
  br label %40
36:
  %37 = load i8, i8* %6
  %38 = sext i8 %37 to i32
  %39 = sub nsw i32 %38, 48
  br label %40
40:
  %41 = phi i32 [ %35, %31 ], [ %39, %36 ]
  br label %42
42:
  %43 = phi i32 [ %26, %22 ], [ %41, %40 ]
  store i32 %43, i32* %7
  %44 = load i32, i32* %7
  %45 = load i8*, i8** %4
  %46 = load i32, i32* %5
  %47 = sub nsw i32 %46, 1
  %48 = call i32 @Hn(i8* %45, i32 %47)
  %49 = mul nsw i32 16, %48
  %50 = add nsw i32 %44, %49
  store i32 %50, i32* %3
  br label %52
52:
  %53 = load i32, i32* %3
  ret i32 %53
}
define dso_local i32 @ne(i8* %0) {
  %2 = alloca i8*
  store i8* %0, i8** %2
  %3 = load i8*, i8** %2
  %4 = load i8*, i8** %2
  %5 = call i64 @strlen(i8* %4)
  %6 = trunc i64 %5 to i32
  %7 = call i32 @Hn(i8* %3, i32 %6)
  ret i32 %7
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
  %13 = call i32 @ne(i8* %12)
  %14 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([3 x i8], [3 x i8]* @.str, i64 0, i64 0), i32 %13)
  store i32 0, i32* %3
  br label %15
15:
  %16 = load i32, i32* %3
  ret i32 %16
}
declare i32 @printf(i8*, ...)
