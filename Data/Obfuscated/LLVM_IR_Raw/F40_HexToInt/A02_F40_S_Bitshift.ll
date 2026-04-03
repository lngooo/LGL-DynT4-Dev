@.str = constant [3 x i8] c"%d\00"
define dso_local i32 @LW7(i8* %0) {
  %2 = alloca i8*
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i8
  store i8* %0, i8** %2
  store i32 0, i32* %3
  store i32 0, i32* %4
  br label %9
9:
  %10 = load i8*, i8** %2
  %11 = load i32, i32* %4
  %12 = sext i32 %11 to i64
  %13 = getelementptr inbounds i8, i8* %10, i64 %12
  %14 = load i8, i8* %13
  %15 = sext i8 %14 to i32
  %16 = icmp ne i32 %15, 0
  br i1 %16, label %19, label %17
17:
  br label %47
19:
  store i32 0, i32* %5
  %21 = load i8*, i8** %2
  %22 = load i32, i32* %4
  %23 = sext i32 %22 to i64
  %24 = getelementptr inbounds i8, i8* %21, i64 %23
  %25 = load i8, i8* %24
  store i8 %25, i8* %6
  %26 = load i8, i8* %6
  %27 = sext i8 %26 to i32
  %28 = icmp sle i32 %27, 57
  br i1 %28, label %29, label %33
29:
  %30 = load i8, i8* %6
  %31 = sext i8 %30 to i32
  %32 = sub nsw i32 %31, 48
  store i32 %32, i32* %5
  br label %38
33:
  %34 = load i8, i8* %6
  %35 = sext i8 %34 to i32
  %36 = or i32 %35, 32
  %37 = sub nsw i32 %36, 87
  store i32 %37, i32* %5
  br label %38
38:
  %39 = load i32, i32* %3
  %40 = shl i32 %39, 4
  %41 = load i32, i32* %5
  %42 = or i32 %40, %41
  store i32 %42, i32* %3
  br label %44
44:
  %45 = load i32, i32* %4
  %46 = add nsw i32 %45, 1
  store i32 %46, i32* %4
  br label %9
47:
  %48 = load i32, i32* %3
  ret i32 %48
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
  %13 = call i32 @LW7(i8* %12)
  %14 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([3 x i8], [3 x i8]* @.str, i64 0, i64 0), i32 %13)
  store i32 0, i32* %3
  br label %15
15:
  %16 = load i32, i32* %3
  ret i32 %16
}
declare i32 @printf(i8*, ...)
