@.str = constant [3 x i8] c"%d\00"
define dso_local i32 @D(i8* %0) {
  %2 = alloca i8*
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  store i8* %0, i8** %2
  store i32 0, i32* %3
  store i32 0, i32* %4
  %10 = load i8*, i8** %2
  %11 = call i64 @strlen(i8* %10)
  %12 = trunc i64 %11 to i32
  store i32 %12, i32* %5
  br label %13
13:
  %14 = load i32, i32* %4
  %15 = load i32, i32* %5
  %16 = icmp slt i32 %14, %15
  br i1 %16, label %17, label %53
17:
  %19 = load i8*, i8** %2
  %20 = load i32, i32* %4
  %21 = sext i32 %20 to i64
  %22 = getelementptr inbounds i8, i8* %19, i64 %21
  %23 = load i8, i8* %22
  %24 = sext i8 %23 to i32
  %25 = icmp sle i32 %24, 57
  br i1 %25, label %26, label %34
26:
  %27 = load i8*, i8** %2
  %28 = load i32, i32* %4
  %29 = sext i32 %28 to i64
  %30 = getelementptr inbounds i8, i8* %27, i64 %29
  %31 = load i8, i8* %30
  %32 = sext i8 %31 to i32
  %33 = sub nsw i32 %32, 48
  br label %44
34:
  %35 = load i8*, i8** %2
  %36 = load i32, i32* %4
  %37 = sext i32 %36 to i64
  %38 = getelementptr inbounds i8, i8* %35, i64 %37
  %39 = load i8, i8* %38
  %40 = sext i8 %39 to i32
  %41 = or i32 %40, 32
  %42 = sub nsw i32 %41, 97
  %43 = add nsw i32 %42, 10
  br label %44
44:
  %45 = phi i32 [ %33, %26 ], [ %43, %34 ]
  store i32 %45, i32* %6
  %46 = load i32, i32* %3
  %47 = shl i32 %46, 4
  %48 = load i32, i32* %6
  %49 = or i32 %47, %48
  store i32 %49, i32* %3
  %50 = load i32, i32* %4
  %51 = add nsw i32 %50, 1
  store i32 %51, i32* %4
  br label %13
53:
  %54 = load i32, i32* %3
  ret i32 %54
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
  %13 = call i32 @D(i8* %12)
  %14 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([3 x i8], [3 x i8]* @.str, i64 0, i64 0), i32 %13)
  store i32 0, i32* %3
  br label %15
15:
  %16 = load i32, i32* %3
  ret i32 %16
}
declare i32 @printf(i8*, ...)
