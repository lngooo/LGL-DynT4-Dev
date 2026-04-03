@.str = constant [4 x i8] c"%s\0A\00"
define dso_local void @CaesarCipher(i8* %0, i32 %1) {
  %3 = alloca i8*
  %4 = alloca i32
  %5 = alloca i32
  store i8* %0, i8** %3
  store i32 %1, i32* %4
  %6 = load i8*, i8** %3
  %7 = load i8, i8* %6
  %8 = sext i8 %7 to i32
  %9 = icmp eq i32 %8, 0
  br i1 %9, label %10, label %11
10:
  br label %64
11:
  %13 = load i32, i32* %4
  %14 = srem i32 %13, 26
  %15 = add nsw i32 %14, 26
  %16 = srem i32 %15, 26
  store i32 %16, i32* %5
  %17 = load i8*, i8** %3
  %18 = load i8, i8* %17
  %19 = sext i8 %18 to i32
  %20 = icmp sge i32 %19, 65
  br i1 %20, label %21, label %37
21:
  %22 = load i8*, i8** %3
  %23 = load i8, i8* %22
  %24 = sext i8 %23 to i32
  %25 = icmp sle i32 %24, 90
  br i1 %25, label %26, label %37
26:
  %27 = load i8*, i8** %3
  %28 = load i8, i8* %27
  %29 = sext i8 %28 to i32
  %30 = sub nsw i32 %29, 65
  %31 = load i32, i32* %5
  %32 = add nsw i32 %30, %31
  %33 = srem i32 %32, 26
  %34 = add nsw i32 %33, 65
  %35 = trunc i32 %34 to i8
  %36 = load i8*, i8** %3
  store i8 %35, i8* %36
  br label %59
37:
  %38 = load i8*, i8** %3
  %39 = load i8, i8* %38
  %40 = sext i8 %39 to i32
  %41 = icmp sge i32 %40, 97
  br i1 %41, label %42, label %58
42:
  %43 = load i8*, i8** %3
  %44 = load i8, i8* %43
  %45 = sext i8 %44 to i32
  %46 = icmp sle i32 %45, 122
  br i1 %46, label %47, label %58
47:
  %48 = load i8*, i8** %3
  %49 = load i8, i8* %48
  %50 = sext i8 %49 to i32
  %51 = sub nsw i32 %50, 97
  %52 = load i32, i32* %5
  %53 = add nsw i32 %51, %52
  %54 = srem i32 %53, 26
  %55 = add nsw i32 %54, 97
  %56 = trunc i32 %55 to i8
  %57 = load i8*, i8** %3
  store i8 %56, i8* %57
  br label %58
58:
  br label %59
59:
  %60 = load i8*, i8** %3
  %61 = getelementptr inbounds i8, i8* %60, i64 1
  %62 = load i32, i32* %4
  call void @CaesarCipher(i8* %61, i32 %62)
  br label %64
64:
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
