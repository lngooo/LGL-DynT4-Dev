@.str = constant [4 x i8] c"%d\0A\00"
define dso_local i32 @compare(i8* %0, i8* %1) {
  %3 = alloca i8*
  %4 = alloca i8*
  store i8* %0, i8** %3
  store i8* %1, i8** %4
  %5 = load i8*, i8** %3
  %7 = load i32, i32* %6
  %8 = load i8*, i8** %4
  %10 = load i32, i32* %9
  %11 = sub nsw i32 %7, %10
  ret i32 %11
}
define dso_local i32 @BinarySearch(i32* %0, i32 %1, i32 %2) {
  %4 = alloca i32
  %5 = alloca i32*
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32*
  %9 = alloca i32
  store i32* %0, i32** %5
  store i32 %1, i32* %6
  store i32 %2, i32* %7
  %12 = load i32*, i32** %5
  %14 = load i32, i32* %6
  %15 = sext i32 %14 to i64
  %16 = call i8* @bsearch(i8* %11, i8* %13, i64 %15, i64 4, i32 (i8*, i8*)* @compare)
  store i32* %17, i32** %8
  %18 = load i32*, i32** %8
  %19 = icmp eq i32* %18, null
  br i1 %19, label %20, label %21
20:
  store i32 -1, i32* %4
  store i32 1, i32* %9
  br label %29
21:
  %22 = load i32*, i32** %8
  %23 = load i32*, i32** %5
  %24 = ptrtoint i32* %22 to i64
  %25 = ptrtoint i32* %23 to i64
  %26 = sub i64 %24, %25
  %27 = sdiv exact i64 %26, 4
  %28 = trunc i64 %27 to i32
  store i32 %28, i32* %4
  store i32 1, i32* %9
  br label %29
29:
  %31 = load i32, i32* %4
  ret i32 %31
}
define available_externally i8* @bsearch(i8* nonnull %0, i8* nonnull %1, i64 %2, i64 %3, i32 (i8*, i8*)* nonnull %4) {
  %6 = alloca i8*
  %7 = alloca i8*
  %8 = alloca i8*
  %9 = alloca i64
  %10 = alloca i64
  %11 = alloca i32 (i8*, i8*)*
  %12 = alloca i64
  %13 = alloca i64
  %14 = alloca i64
  %15 = alloca i8*
  %16 = alloca i32
  %17 = alloca i32
  store i8* %0, i8** %7
  store i8* %1, i8** %8
  store i64 %2, i64* %9
  store i64 %3, i64* %10
  store i32 (i8*, i8*)* %4, i32 (i8*, i8*)** %11
  store i64 0, i64* %12
  %23 = load i64, i64* %9
  store i64 %23, i64* %13
  br label %24
24:
  %25 = load i64, i64* %12
  %26 = load i64, i64* %13
  %27 = icmp ult i64 %25, %26
  br i1 %27, label %28, label %56
28:
  %29 = load i64, i64* %12
  %30 = load i64, i64* %13
  %31 = add i64 %29, %30
  %32 = udiv i64 %31, 2
  store i64 %32, i64* %14
  %33 = load i8*, i8** %8
  %34 = load i64, i64* %14
  %35 = load i64, i64* %10
  %36 = mul i64 %34, %35
  %37 = getelementptr inbounds i8, i8* %33, i64 %36
  store i8* %37, i8** %15
  %38 = load i32 (i8*, i8*)*, i32 (i8*, i8*)** %11
  %39 = load i8*, i8** %7
  %40 = load i8*, i8** %15
  %41 = call i32 %38(i8* %39, i8* %40)
  store i32 %41, i32* %16
  %42 = load i32, i32* %16
  %43 = icmp slt i32 %42, 0
  br i1 %43, label %44, label %46
44:
  %45 = load i64, i64* %14
  store i64 %45, i64* %13
  br label %55
46:
  %47 = load i32, i32* %16
  %48 = icmp sgt i32 %47, 0
  br i1 %48, label %49, label %52
49:
  %50 = load i64, i64* %14
  %51 = add i64 %50, 1
  store i64 %51, i64* %12
  br label %54
52:
  %53 = load i8*, i8** %15
  store i8* %53, i8** %6
  store i32 1, i32* %17
  br label %57
54:
  br label %55
55:
  br label %24
56:
  store i8* null, i8** %6
  store i32 1, i32* %17
  br label %57
57:
  %63 = load i8*, i8** %6
  ret i8* %63
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
