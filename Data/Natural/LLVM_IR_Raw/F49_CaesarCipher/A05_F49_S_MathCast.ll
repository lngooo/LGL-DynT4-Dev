@.str = constant [4 x i8] c"%s\0A\00"
define dso_local void @CaesarCipher(i8* %0, i32 %1) {
  %3 = alloca i8*
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32
  store i8* %0, i8** %3
  store i32 %1, i32* %4
  %9 = load i32, i32* %4
  %10 = srem i32 %9, 26
  %11 = add nsw i32 %10, 26
  %12 = srem i32 %11, 26
  store i32 %12, i32* %5
  store i32 0, i32* %6
  br label %14
14:
  %15 = load i8*, i8** %3
  %16 = load i32, i32* %6
  %17 = sext i32 %16 to i64
  %18 = getelementptr inbounds i8, i8* %15, i64 %17
  %19 = load i8, i8* %18
  %20 = sext i8 %19 to i32
  %21 = icmp ne i32 %20, 0
  br i1 %21, label %24, label %22
22:
  br label %72
24:
  %26 = load i8*, i8** %3
  %27 = load i32, i32* %6
  %28 = sext i32 %27 to i64
  %29 = getelementptr inbounds i8, i8* %26, i64 %28
  %30 = load i8, i8* %29
  %31 = sext i8 %30 to i32
  store i32 %31, i32* %7
  %32 = load i32, i32* %7
  %33 = icmp sge i32 %32, 97
  br i1 %33, label %34, label %49
34:
  %35 = load i32, i32* %7
  %36 = icmp sle i32 %35, 122
  br i1 %36, label %37, label %49
37:
  %38 = load i32, i32* %7
  %39 = sub nsw i32 %38, 97
  %40 = load i32, i32* %5
  %41 = add nsw i32 %39, %40
  %42 = srem i32 %41, 26
  %43 = add nsw i32 97, %42
  %44 = trunc i32 %43 to i8
  %45 = load i8*, i8** %3
  %46 = load i32, i32* %6
  %47 = sext i32 %46 to i64
  %48 = getelementptr inbounds i8, i8* %45, i64 %47
  store i8 %44, i8* %48
  br label %49
49:
  %50 = load i32, i32* %7
  %51 = icmp sge i32 %50, 65
  br i1 %51, label %52, label %67
52:
  %53 = load i32, i32* %7
  %54 = icmp sle i32 %53, 90
  br i1 %54, label %55, label %67
55:
  %56 = load i32, i32* %7
  %57 = sub nsw i32 %56, 65
  %58 = load i32, i32* %5
  %59 = add nsw i32 %57, %58
  %60 = srem i32 %59, 26
  %61 = add nsw i32 65, %60
  %62 = trunc i32 %61 to i8
  %63 = load i8*, i8** %3
  %64 = load i32, i32* %6
  %65 = sext i32 %64 to i64
  %66 = getelementptr inbounds i8, i8* %63, i64 %65
  store i8 %62, i8* %66
  br label %67
67:
  br label %69
69:
  %70 = load i32, i32* %6
  %71 = add nsw i32 %70, 1
  store i32 %71, i32* %6
  br label %14
72:
  ret void
}
define dso_local i32 @main(i32 %0, i8** %1) {
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i8**
  %6 = alloca i32
  store i32 0, i32* %3
  store i32 %0, i32* %4
  store i8** %1, i8*** %5
  %7 = load i32, i32* %4
  %8 = icmp slt i32 %7, 3
  br i1 %8, label %9, label %10
9:
  store i32 1, i32* %3
  br label %25
10:
  %12 = load i8**, i8*** %5
  %13 = getelementptr inbounds i8*, i8** %12, i64 2
  %14 = load i8*, i8** %13
  %15 = call i32 @atoi(i8* %14)
  store i32 %15, i32* %6
  %16 = load i8**, i8*** %5
  %17 = getelementptr inbounds i8*, i8** %16, i64 1
  %18 = load i8*, i8** %17
  %19 = load i32, i32* %6
  call void @CaesarCipher(i8* %18, i32 %19)
  %20 = load i8**, i8*** %5
  %21 = getelementptr inbounds i8*, i8** %20, i64 1
  %22 = load i8*, i8** %21
  %23 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str, i64 0, i64 0), i8* %22)
  store i32 0, i32* %3
  br label %25
25:
  %26 = load i32, i32* %3
  ret i32 %26
}
define available_externally i32 @atoi(i8* nonnull %0) {
  %2 = alloca i8*
  store i8* %0, i8** %2
  %3 = load i8*, i8** %2
  %4 = call i64 @strtol(i8* %3, i8** null, i32 10)
  %5 = trunc i64 %4 to i32
  ret i32 %5
}
declare i32 @printf(i8*, ...)
declare i64 @strtol(i8*, i8**, i32)
