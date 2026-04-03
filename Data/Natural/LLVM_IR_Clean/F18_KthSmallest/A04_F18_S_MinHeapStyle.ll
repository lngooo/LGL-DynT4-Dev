define dso_local i32 @KthSmallest(i32* %0, i32 %1, i32 %2, i32 %3) {
  %5 = alloca i32*
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32
  %9 = alloca i32
  %10 = alloca i32
  %11 = alloca i32
  %12 = alloca i32
  %13 = alloca i32
  store i32* %0, i32** %5
  store i32 %1, i32* %6
  store i32 %2, i32* %7
  store i32 %3, i32* %8
  store i32 0, i32* %9
  br label %15
15:
  %16 = load i32, i32* %9
  %17 = load i32, i32* %8
  %18 = icmp slt i32 %16, %17
  br i1 %18, label %21, label %19
19:
  store i32 2, i32* %10
  br label %77
21:
  %23 = load i32, i32* %9
  store i32 %23, i32* %11
  %25 = load i32, i32* %9
  %26 = add nsw i32 %25, 1
  store i32 %26, i32* %12
  br label %27
27:
  %28 = load i32, i32* %12
  %29 = load i32, i32* %7
  %30 = icmp sle i32 %28, %29
  br i1 %30, label %33, label %31
31:
  store i32 5, i32* %10
  br label %51
33:
  %34 = load i32*, i32** %5
  %35 = load i32, i32* %12
  %36 = sext i32 %35 to i64
  %37 = getelementptr inbounds i32, i32* %34, i64 %36
  %38 = load i32, i32* %37
  %39 = load i32*, i32** %5
  %40 = load i32, i32* %11
  %41 = sext i32 %40 to i64
  %42 = getelementptr inbounds i32, i32* %39, i64 %41
  %43 = load i32, i32* %42
  %44 = icmp slt i32 %38, %43
  br i1 %44, label %45, label %47
45:
  %46 = load i32, i32* %12
  store i32 %46, i32* %11
  br label %47
47:
  br label %48
48:
  %49 = load i32, i32* %12
  %50 = add nsw i32 %49, 1
  store i32 %50, i32* %12
  br label %27
51:
  %53 = load i32*, i32** %5
  %54 = load i32, i32* %9
  %55 = sext i32 %54 to i64
  %56 = getelementptr inbounds i32, i32* %53, i64 %55
  %57 = load i32, i32* %56
  store i32 %57, i32* %13
  %58 = load i32*, i32** %5
  %59 = load i32, i32* %11
  %60 = sext i32 %59 to i64
  %61 = getelementptr inbounds i32, i32* %58, i64 %60
  %62 = load i32, i32* %61
  %63 = load i32*, i32** %5
  %64 = load i32, i32* %9
  %65 = sext i32 %64 to i64
  %66 = getelementptr inbounds i32, i32* %63, i64 %65
  store i32 %62, i32* %66
  %67 = load i32, i32* %13
  %68 = load i32*, i32** %5
  %69 = load i32, i32* %11
  %70 = sext i32 %69 to i64
  %71 = getelementptr inbounds i32, i32* %68, i64 %70
  store i32 %67, i32* %71
  br label %74
74:
  %75 = load i32, i32* %9
  %76 = add nsw i32 %75, 1
  store i32 %76, i32* %9
  br label %15
77:
  %78 = load i32*, i32** %5
  %79 = load i32, i32* %8
  %80 = sub nsw i32 %79, 1
  %81 = sext i32 %80 to i64
  %82 = getelementptr inbounds i32, i32* %78, i64 %81
  %83 = load i32, i32* %82
  ret i32 %83
}
