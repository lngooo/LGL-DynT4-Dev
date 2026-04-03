@.str = constant [4 x i8] c"%d\0A\00"
define dso_local i32 @BinarySearch(i32* %0, i32 %1, i32 %2) {
  %4 = alloca i32
  %5 = alloca i32*
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32
  %9 = alloca i32
  %10 = alloca i32
  %11 = alloca i32
  %12 = alloca i32
  store i32* %0, i32** %5
  store i32 %1, i32* %6
  store i32 %2, i32* %7
  store i32 0, i32* %8
  %15 = load i32, i32* %6
  %16 = sub nsw i32 %15, 1
  store i32 %16, i32* %9
  store i32 0, i32* %11
  br label %19
19:
  %20 = load i32, i32* %11
  %21 = icmp ne i32 %20, -1
  br i1 %21, label %22, label %66
22:
  %23 = load i32, i32* %11
  switch i32 %23, label %65 [
    i32 0, label %24
    i32 1, label %30
    i32 2, label %46
    i32 3, label %48
    i32 4, label %58
    i32 5, label %61
    i32 6, label %62
  ]
24:
  %25 = load i32, i32* %8
  %26 = load i32, i32* %9
  %27 = icmp sle i32 %25, %26
  %28 = zext i1 %27 to i64
  %29 = select i1 %27, i32 1, i32 5
  store i32 %29, i32* %11
  br label %65
30:
  %31 = load i32, i32* %8
  %32 = load i32, i32* %9
  %33 = load i32, i32* %8
  %34 = sub nsw i32 %32, %33
  %35 = sdiv i32 %34, 2
  %36 = add nsw i32 %31, %35
  store i32 %36, i32* %10
  %37 = load i32*, i32** %5
  %38 = load i32, i32* %10
  %39 = sext i32 %38 to i64
  %40 = getelementptr inbounds i32, i32* %37, i64 %39
  %41 = load i32, i32* %40
  %42 = load i32, i32* %7
  %43 = icmp eq i32 %41, %42
  %44 = zext i1 %43 to i64
  %45 = select i1 %43, i32 2, i32 3
  store i32 %45, i32* %11
  br label %65
46:
  %47 = load i32, i32* %10
  store i32 %47, i32* %4
  store i32 1, i32* %12
  br label %67
48:
  %49 = load i32*, i32** %5
  %50 = load i32, i32* %10
  %51 = sext i32 %50 to i64
  %52 = getelementptr inbounds i32, i32* %49, i64 %51
  %53 = load i32, i32* %52
  %54 = load i32, i32* %7
  %55 = icmp slt i32 %53, %54
  %56 = zext i1 %55 to i64
  %57 = select i1 %55, i32 4, i32 6
  store i32 %57, i32* %11
  br label %65
58:
  %59 = load i32, i32* %10
  %60 = add nsw i32 %59, 1
  store i32 %60, i32* %8
  store i32 0, i32* %11
  br label %65
61:
  store i32 -1, i32* %4
  store i32 1, i32* %12
  br label %67
62:
  %63 = load i32, i32* %10
  %64 = sub nsw i32 %63, 1
  store i32 %64, i32* %9
  store i32 0, i32* %11
  br label %65
65:
  br label %19
66:
  store i32 -1, i32* %4
  store i32 1, i32* %12
  br label %67
67:
  %72 = load i32, i32* %4
  ret i32 %72
}
define dso_local i32 @main(i32 %0, i8** %1) {
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i8**
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32*
  %9 = alloca i32
  store i32 0, i32* %3
  store i32 %0, i32* %4
  store i8** %1, i8*** %5
  %10 = load i32, i32* %4
  %11 = icmp slt i32 %10, 3
  br i1 %11, label %12, label %13
12:
  store i32 1, i32* %3
  br label %61
13:
  %15 = load i8**, i8*** %5
  %16 = getelementptr inbounds i8*, i8** %15, i64 1
  %17 = load i8*, i8** %16
  %18 = call i32 @atoi(i8* %17)
  store i32 %18, i32* %6
  %20 = load i32, i32* %4
  %21 = sub nsw i32 %20, 2
  store i32 %21, i32* %7
  %23 = load i32, i32* %7
  %24 = sext i32 %23 to i64
  %25 = mul i64 %24, 4
  %26 = call noalias i8* @malloc(i64 %25)
  store i32* %27, i32** %8
  store i32 0, i32* %9
  br label %29
29:
  %30 = load i32, i32* %9
  %31 = load i32, i32* %7
  %32 = icmp slt i32 %30, %31
  br i1 %32, label %35, label %33
33:
  br label %50
35:
  %36 = load i8**, i8*** %5
  %37 = load i32, i32* %9
  %38 = add nsw i32 %37, 2
  %39 = sext i32 %38 to i64
  %40 = getelementptr inbounds i8*, i8** %36, i64 %39
  %41 = load i8*, i8** %40
  %42 = call i32 @atoi(i8* %41)
  %43 = load i32*, i32** %8
  %44 = load i32, i32* %9
  %45 = sext i32 %44 to i64
  %46 = getelementptr inbounds i32, i32* %43, i64 %45
  store i32 %42, i32* %46
  br label %47
47:
  %48 = load i32, i32* %9
  %49 = add nsw i32 %48, 1
  store i32 %49, i32* %9
  br label %29
50:
  %51 = load i32*, i32** %8
  %52 = load i32, i32* %7
  %53 = load i32, i32* %6
  %54 = call i32 @BinarySearch(i32* %51, i32 %52, i32 %53)
  %55 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str, i64 0, i64 0), i32 %54)
  %56 = load i32*, i32** %8
  call void @free(i8* %57)
  store i32 0, i32* %3
  br label %61
61:
  %62 = load i32, i32* %3
  ret i32 %62
}
define available_externally i32 @atoi(i8* nonnull %0) {
  %2 = alloca i8*
  store i8* %0, i8** %2
  %3 = load i8*, i8** %2
  %4 = call i64 @strtol(i8* %3, i8** null, i32 10)
  %5 = trunc i64 %4 to i32
  ret i32 %5
}
declare noalias i8* @malloc(i64)
declare i32 @printf(i8*, ...)
declare void @free(i8*)
declare i64 @strtol(i8*, i8**, i32)
