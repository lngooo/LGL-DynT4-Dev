@.str = constant [4 x i8] c"%d\0A\00"
define dso_local i32 @u5(i8* %0) {
  %2 = alloca i32
  %3 = alloca i8*
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca [100 x i8]
  %7 = alloca i32
  store i8* %0, i8** %3
  store i32 0, i32* %4
  br label %9
9:
  %10 = load i8*, i8** %3
  %11 = load i32, i32* %4
  %12 = sext i32 %11 to i64
  %13 = getelementptr inbounds i8, i8* %10, i64 %12
  %14 = load i8, i8* %13
  %15 = icmp ne i8 %14, 0
  br i1 %15, label %16, label %19
16:
  %17 = load i32, i32* %4
  %18 = add nsw i32 %17, 1
  store i32 %18, i32* %4
  br label %9
19:
  %20 = load i32, i32* %4
  %21 = icmp sle i32 %20, 1
  br i1 %21, label %22, label %23
22:
  store i32 1, i32* %2
  store i32 1, i32* %5
  br label %67
23:
  %24 = load i8*, i8** %3
  %25 = getelementptr inbounds i8, i8* %24, i64 0
  %26 = load i8, i8* %25
  %27 = sext i8 %26 to i32
  %28 = load i8*, i8** %3
  %29 = load i32, i32* %4
  %30 = sub nsw i32 %29, 1
  %31 = sext i32 %30 to i64
  %32 = getelementptr inbounds i8, i8* %28, i64 %31
  %33 = load i8, i8* %32
  %34 = sext i8 %33 to i32
  %35 = icmp ne i32 %27, %34
  br i1 %35, label %36, label %37
36:
  store i32 0, i32* %2
  store i32 1, i32* %5
  br label %67
37:
  store i32 1, i32* %7
  br label %40
40:
  %41 = load i32, i32* %7
  %42 = load i32, i32* %4
  %43 = sub nsw i32 %42, 1
  %44 = icmp slt i32 %41, %43
  br i1 %44, label %45, label %58
45:
  %46 = load i8*, i8** %3
  %47 = load i32, i32* %7
  %48 = sext i32 %47 to i64
  %49 = getelementptr inbounds i8, i8* %46, i64 %48
  %50 = load i8, i8* %49
  %51 = load i32, i32* %7
  %52 = sub nsw i32 %51, 1
  %53 = sext i32 %52 to i64
  %54 = getelementptr inbounds [100 x i8], [100 x i8]* %6, i64 0, i64 %53
  store i8 %50, i8* %54
  br label %55
55:
  %56 = load i32, i32* %7
  %57 = add nsw i32 %56, 1
  store i32 %57, i32* %7
  br label %40
58:
  %59 = load i32, i32* %7
  %60 = sub nsw i32 %59, 1
  %61 = sext i32 %60 to i64
  %62 = getelementptr inbounds [100 x i8], [100 x i8]* %6, i64 0, i64 %61
  store i8 0, i8* %62
  %63 = getelementptr inbounds [100 x i8], [100 x i8]* %6, i64 0, i64 0
  %64 = call i32 @u5(i8* %63)
  store i32 %64, i32* %2
  store i32 1, i32* %5
  br label %67
67:
  %69 = load i32, i32* %2
  ret i32 %69
}
define dso_local i32 @main(i32 %0, i8** %1) {
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i8**
  %6 = alloca i8*
  %7 = alloca i32
  store i32 0, i32* %3
  store i32 %0, i32* %4
  store i8** %1, i8*** %5
  %8 = load i32, i32* %4
  %9 = icmp slt i32 %8, 2
  br i1 %9, label %10, label %11
10:
  store i32 1, i32* %3
  br label %23
11:
  %13 = load i8**, i8*** %5
  %14 = getelementptr inbounds i8*, i8** %13, i64 1
  %15 = load i8*, i8** %14
  store i8* %15, i8** %6
  %17 = load i8*, i8** %6
  %18 = call i32 @u5(i8* %17)
  store i32 %18, i32* %7
  %19 = load i32, i32* %7
  %20 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str, i64 0, i64 0), i32 %19)
  store i32 0, i32* %3
  br label %23
23:
  %24 = load i32, i32* %3
  ret i32 %24
}
declare i32 @printf(i8*, ...)
