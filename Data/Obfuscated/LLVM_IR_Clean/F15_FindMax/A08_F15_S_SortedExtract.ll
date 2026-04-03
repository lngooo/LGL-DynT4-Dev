define dso_local i32 @nsF6(i8* %0, i8* %1) {
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
define dso_local i32 @NSms6(i32* %0, i32 %1) {
  %3 = alloca i32
  %4 = alloca i32*
  %5 = alloca i32
  %6 = alloca i32*
  %7 = alloca i32
  %8 = alloca i32
  store i32* %0, i32** %4
  store i32 %1, i32* %5
  %9 = load i32, i32* %5
  %10 = icmp sle i32 %9, 0
  br i1 %10, label %11, label %12
11:
  store i32 0, i32* %3
  br label %56
12:
  %14 = load i32, i32* %5
  %15 = sext i32 %14 to i64
  %16 = mul i64 %15, 4
  %17 = call noalias i8* @malloc(i64 %16)
  store i32* %18, i32** %6
  store i32 0, i32* %7
  br label %20
20:
  %21 = load i32, i32* %7
  %22 = load i32, i32* %5
  %23 = icmp slt i32 %21, %22
  br i1 %23, label %26, label %24
24:
  br label %39
26:
  %27 = load i32*, i32** %4
  %28 = load i32, i32* %7
  %29 = sext i32 %28 to i64
  %30 = getelementptr inbounds i32, i32* %27, i64 %29
  %31 = load i32, i32* %30
  %32 = load i32*, i32** %6
  %33 = load i32, i32* %7
  %34 = sext i32 %33 to i64
  %35 = getelementptr inbounds i32, i32* %32, i64 %34
  store i32 %31, i32* %35
  br label %36
36:
  %37 = load i32, i32* %7
  %38 = add nsw i32 %37, 1
  store i32 %38, i32* %7
  br label %20
39:
  %40 = load i32*, i32** %6
  %42 = load i32, i32* %5
  %43 = sext i32 %42 to i64
  call void @qsort(i8* %41, i64 %43, i64 4, i32 (i8*, i8*)* @nsF6)
  %45 = load i32*, i32** %6
  %46 = load i32, i32* %5
  %47 = sub nsw i32 %46, 1
  %48 = sext i32 %47 to i64
  %49 = getelementptr inbounds i32, i32* %45, i64 %48
  %50 = load i32, i32* %49
  store i32 %50, i32* %8
  %51 = load i32*, i32** %6
  call void @free(i8* %52)
  %53 = load i32, i32* %8
  store i32 %53, i32* %3
  br label %56
56:
  %57 = load i32, i32* %3
  ret i32 %57
}
declare noalias i8* @malloc(i64)
declare void @qsort(i8*, i64, i64, i32 (i8*, i8*)*)
declare void @free(i8*)
