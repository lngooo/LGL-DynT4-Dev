@.str = constant [4 x i8] c"%s\0A\00"
define dso_local void @CaesarCipher(i8* %0, i32 %1) {
  %3 = alloca i8*
  %4 = alloca i32
  %5 = alloca i8*
  %6 = alloca i32
  store i8* %0, i8** %3
  store i32 %1, i32* %4
  %8 = load i8*, i8** %3
  store i8* %8, i8** %5
  %10 = load i32, i32* %4
  %11 = srem i32 %10, 26
  %12 = add nsw i32 %11, 26
  %13 = srem i32 %12, 26
  store i32 %13, i32* %6
  br label %14
14:
  %15 = load i8*, i8** %5
  %16 = load i8, i8* %15
  %17 = icmp ne i8 %16, 0
  br i1 %17, label %19, label %18
18:
  br label %65
19:
  %20 = load i8*, i8** %5
  %21 = load i8, i8* %20
  %22 = sext i8 %21 to i32
  %23 = icmp sge i32 %22, 65
  br i1 %23, label %24, label %40
24:
  %25 = load i8*, i8** %5
  %26 = load i8, i8* %25
  %27 = sext i8 %26 to i32
  %28 = icmp sle i32 %27, 90
  br i1 %28, label %29, label %40
29:
  %30 = load i8*, i8** %5
  %31 = load i8, i8* %30
  %32 = sext i8 %31 to i32
  %33 = sub nsw i32 %32, 65
  %34 = load i32, i32* %6
  %35 = add nsw i32 %33, %34
  %36 = srem i32 %35, 26
  %37 = add nsw i32 %36, 65
  %38 = trunc i32 %37 to i8
  %39 = load i8*, i8** %5
  store i8 %38, i8* %39
  br label %62
40:
  %41 = load i8*, i8** %5
  %42 = load i8, i8* %41
  %43 = sext i8 %42 to i32
  %44 = icmp sge i32 %43, 97
  br i1 %44, label %45, label %61
45:
  %46 = load i8*, i8** %5
  %47 = load i8, i8* %46
  %48 = sext i8 %47 to i32
  %49 = icmp sle i32 %48, 122
  br i1 %49, label %50, label %61
50:
  %51 = load i8*, i8** %5
  %52 = load i8, i8* %51
  %53 = sext i8 %52 to i32
  %54 = sub nsw i32 %53, 97
  %55 = load i32, i32* %6
  %56 = add nsw i32 %54, %55
  %57 = srem i32 %56, 26
  %58 = add nsw i32 %57, 97
  %59 = trunc i32 %58 to i8
  %60 = load i8*, i8** %5
  store i8 %59, i8* %60
  br label %61
61:
  br label %62
62:
  %63 = load i8*, i8** %5
  %64 = getelementptr inbounds i8, i8* %63, i32 1
  store i8* %64, i8** %5
  br label %14
65:
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
