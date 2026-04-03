@.str = constant [4 x i8] c"%d \00"
@.str.1 = constant [2 x i8] c"\0A\00"
define dso_local void @L(i32* %0, i32 %1) {
  %3 = alloca i32*
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  store i32* %0, i32** %3
  store i32 %1, i32* %4
  %7 = load i32, i32* %4
  %8 = icmp slt i32 %7, 2
  br i1 %8, label %9, label %10
9:
  br label %49
10:
  store i32 0, i32* %5
  br label %12
12:
  %14 = load i32*, i32** %3
  %15 = load i32, i32* %5
  %16 = sext i32 %15 to i64
  %17 = getelementptr inbounds i32, i32* %14, i64 %16
  %18 = load i32, i32* %17
  store i32 %18, i32* %6
  %19 = load i32*, i32** %3
  %20 = load i32, i32* %4
  %21 = sub nsw i32 %20, 1
  %22 = load i32, i32* %5
  %23 = sub nsw i32 %21, %22
  %24 = sext i32 %23 to i64
  %25 = getelementptr inbounds i32, i32* %19, i64 %24
  %26 = load i32, i32* %25
  %27 = load i32*, i32** %3
  %28 = load i32, i32* %5
  %29 = sext i32 %28 to i64
  %30 = getelementptr inbounds i32, i32* %27, i64 %29
  store i32 %26, i32* %30
  %31 = load i32, i32* %6
  %32 = load i32*, i32** %3
  %33 = load i32, i32* %4
  %34 = sub nsw i32 %33, 1
  %35 = load i32, i32* %5
  %36 = sub nsw i32 %34, %35
  %37 = sext i32 %36 to i64
  %38 = getelementptr inbounds i32, i32* %32, i64 %37
  store i32 %31, i32* %38
  %39 = load i32, i32* %5
  %40 = add nsw i32 %39, 1
  store i32 %40, i32* %5
  br label %42
42:
  %43 = load i32, i32* %5
  %44 = load i32, i32* %4
  %45 = sdiv i32 %44, 2
  %46 = icmp slt i32 %43, %45
  br i1 %46, label %12, label %47
47:
  br label %49
49:
  ret void
}
define dso_local i32 @main(i32 %0, i8** %1) {
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i8**
  %6 = alloca i32
  %7 = alloca i32*
  %8 = alloca i32
  %9 = alloca i32
  store i32 0, i32* %3
  store i32 %0, i32* %4
  store i8** %1, i8*** %5
  %10 = load i32, i32* %4
  %11 = icmp slt i32 %10, 2
  br i1 %11, label %12, label %13
12:
  store i32 0, i32* %3
  br label %71
13:
  %15 = load i32, i32* %4
  %16 = sub nsw i32 %15, 1
  store i32 %16, i32* %6
  %18 = load i32, i32* %6
  %19 = sext i32 %18 to i64
  %20 = mul i64 %19, 4
  %21 = call noalias i8* @malloc(i64 %20)
  store i32* %22, i32** %7
  store i32 0, i32* %8
  br label %24
24:
  %25 = load i32, i32* %8
  %26 = load i32, i32* %6
  %27 = icmp slt i32 %25, %26
  br i1 %27, label %30, label %28
28:
  br label %45
30:
  %31 = load i8**, i8*** %5
  %32 = load i32, i32* %8
  %33 = add nsw i32 %32, 1
  %34 = sext i32 %33 to i64
  %35 = getelementptr inbounds i8*, i8** %31, i64 %34
  %36 = load i8*, i8** %35
  %37 = call i32 @atoi(i8* %36)
  %38 = load i32*, i32** %7
  %39 = load i32, i32* %8
  %40 = sext i32 %39 to i64
  %41 = getelementptr inbounds i32, i32* %38, i64 %40
  store i32 %37, i32* %41
  br label %42
42:
  %43 = load i32, i32* %8
  %44 = add nsw i32 %43, 1
  store i32 %44, i32* %8
  br label %24
45:
  %46 = load i32*, i32** %7
  %47 = load i32, i32* %6
  call void @L(i32* %46, i32 %47)
  store i32 0, i32* %9
  br label %49
49:
  %50 = load i32, i32* %9
  %51 = load i32, i32* %6
  %52 = icmp slt i32 %50, %51
  br i1 %52, label %55, label %53
53:
  br label %65
55:
  %56 = load i32*, i32** %7
  %57 = load i32, i32* %9
  %58 = sext i32 %57 to i64
  %59 = getelementptr inbounds i32, i32* %56, i64 %58
  %60 = load i32, i32* %59
  %61 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str, i64 0, i64 0), i32 %60)
  br label %62
62:
  %63 = load i32, i32* %9
  %64 = add nsw i32 %63, 1
  store i32 %64, i32* %9
  br label %49
65:
  %66 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([2 x i8], [2 x i8]* @.str.1, i64 0, i64 0))
  %67 = load i32*, i32** %7
  call void @free(i8* %68)
  store i32 0, i32* %3
  br label %71
71:
  %72 = load i32, i32* %3
  ret i32 %72
}
declare noalias i8* @malloc(i64)
define available_externally i32 @atoi(i8* nonnull %0) {
  %2 = alloca i8*
  store i8* %0, i8** %2
  %3 = load i8*, i8** %2
  %4 = call i64 @strtol(i8* %3, i8** null, i32 10)
  %5 = trunc i64 %4 to i32
  ret i32 %5
}
declare i32 @printf(i8*, ...)
declare void @free(i8*)
declare i64 @strtol(i8*, i8**, i32)
