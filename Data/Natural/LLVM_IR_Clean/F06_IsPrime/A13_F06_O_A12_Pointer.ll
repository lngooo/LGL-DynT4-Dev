define dso_local i32 @IsPrime(i32 %0) {
  %2 = alloca i32
  %3 = alloca i32
  %4 = alloca i32*
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32
  store i32 %0, i32* %3
  %9 = load i32, i32* %3
  %10 = icmp slt i32 %9, 2
  br i1 %10, label %11, label %12
11:
  store i32 0, i32* %2
  br label %74
12:
  %14 = load i32, i32* %3
  %15 = add nsw i32 %14, 1
  %16 = sext i32 %15 to i64
  %17 = call noalias i8* @calloc(i64 %16, i64 4)
  store i32* %18, i32** %4
  store i32 2, i32* %5
  br label %20
20:
  %21 = load i32, i32* %5
  %22 = load i32, i32* %5
  %23 = mul nsw i32 %21, %22
  %24 = load i32, i32* %3
  %25 = icmp sle i32 %23, %24
  br i1 %25, label %28, label %26
26:
  store i32 2, i32* %6
  br label %60
28:
  %29 = load i32*, i32** %4
  %30 = load i32, i32* %5
  %31 = sext i32 %30 to i64
  %32 = getelementptr inbounds i32, i32* %29, i64 %31
  %33 = load i32, i32* %32
  %34 = icmp eq i32 %33, 0
  br i1 %34, label %35, label %56
35:
  %37 = load i32, i32* %5
  %38 = load i32, i32* %5
  %39 = mul nsw i32 %37, %38
  store i32 %39, i32* %7
  br label %40
40:
  %41 = load i32, i32* %7
  %42 = load i32, i32* %3
  %43 = icmp sle i32 %41, %42
  br i1 %43, label %46, label %44
44:
  store i32 5, i32* %6
  br label %55
46:
  %47 = load i32*, i32** %4
  %48 = load i32, i32* %7
  %49 = sext i32 %48 to i64
  %50 = getelementptr inbounds i32, i32* %47, i64 %49
  store i32 1, i32* %50
  br label %51
51:
  %52 = load i32, i32* %5
  %53 = load i32, i32* %7
  %54 = add nsw i32 %53, %52
  store i32 %54, i32* %7
  br label %40
55:
  br label %56
56:
  br label %57
57:
  %58 = load i32, i32* %5
  %59 = add nsw i32 %58, 1
  store i32 %59, i32* %5
  br label %20
60:
  %62 = load i32*, i32** %4
  %63 = load i32, i32* %3
  %64 = sext i32 %63 to i64
  %65 = getelementptr inbounds i32, i32* %62, i64 %64
  %66 = load i32, i32* %65
  %67 = icmp eq i32 %66, 0
  %68 = zext i1 %67 to i32
  store i32 %68, i32* %8
  %69 = load i32*, i32** %4
  call void @free(i8* %70)
  %71 = load i32, i32* %8
  store i32 %71, i32* %2
  store i32 1, i32* %6
  br label %74
74:
  %75 = load i32, i32* %2
  ret i32 %75
}
declare noalias i8* @calloc(i64, i64)
declare void @free(i8*)
