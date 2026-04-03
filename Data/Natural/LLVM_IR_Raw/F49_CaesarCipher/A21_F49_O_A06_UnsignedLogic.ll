@.str = constant [4 x i8] c"%s\0A\00"
define dso_local void @CaesarCipher(i8* %0, i32 %1) {
  %3 = alloca i8*
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i8
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
  %20 = icmp ne i8 %19, 0
  br i1 %20, label %23, label %21
21:
  br label %75
23:
  %24 = load i8*, i8** %3
  %25 = load i32, i32* %6
  %26 = sext i32 %25 to i64
  %27 = getelementptr inbounds i8, i8* %24, i64 %26
  %28 = load i8, i8* %27
  store i8 %28, i8* %7
  %29 = load i8, i8* %7
  %30 = zext i8 %29 to i32
  %31 = icmp sge i32 %30, 97
  br i1 %31, label %32, label %49
32:
  %33 = load i8, i8* %7
  %34 = zext i8 %33 to i32
  %35 = icmp sle i32 %34, 122
  br i1 %35, label %36, label %49
36:
  %37 = load i8, i8* %7
  %38 = zext i8 %37 to i32
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
  br label %71
49:
  %50 = load i8, i8* %7
  %51 = zext i8 %50 to i32
  %52 = icmp sge i32 %51, 65
  br i1 %52, label %53, label %70
53:
  %54 = load i8, i8* %7
  %55 = zext i8 %54 to i32
  %56 = icmp sle i32 %55, 90
  br i1 %56, label %57, label %70
57:
  %58 = load i8, i8* %7
  %59 = zext i8 %58 to i32
  %60 = sub nsw i32 %59, 65
  %61 = load i32, i32* %5
  %62 = add nsw i32 %60, %61
  %63 = srem i32 %62, 26
  %64 = add nsw i32 65, %63
  %65 = trunc i32 %64 to i8
  %66 = load i8*, i8** %3
  %67 = load i32, i32* %6
  %68 = sext i32 %67 to i64
  %69 = getelementptr inbounds i8, i8* %66, i64 %68
  store i8 %65, i8* %69
  br label %70
70:
  br label %71
71:
  br label %72
72:
  %73 = load i32, i32* %6
  %74 = add nsw i32 %73, 1
  store i32 %74, i32* %6
  br label %14
75:
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
