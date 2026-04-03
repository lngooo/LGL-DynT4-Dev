define dso_local i32 @bC(i32* %0, i32 %1) {
  %3 = alloca i32*
  %4 = alloca i32
  %5 = alloca [128 x i32]
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32
  %9 = alloca i32
  %10 = alloca i32
  store i32* %0, i32** %3
  store i32 %1, i32* %4
  call void @llvm.memset.p0i8.i64(i8* align 16 %12, i8 0, i64 512, i1 false)
  store i32 0, i32* %6
  store i32 0, i32* %7
  br label %15
15:
  %16 = load i32, i32* %7
  %17 = load i32, i32* %4
  %18 = icmp slt i32 %16, %17
  br i1 %18, label %21, label %19
19:
  store i32 2, i32* %8
  br label %63
21:
  %22 = load i32, i32* %7
  %23 = sext i32 %22 to i64
  %24 = getelementptr inbounds [128 x i32], [128 x i32]* %5, i64 0, i64 %23
  %25 = load i32, i32* %24
  %26 = icmp ne i32 %25, 0
  br i1 %26, label %27, label %28
27:
  br label %60
28:
  %30 = load i32, i32* %7
  %31 = add nsw i32 %30, 1
  store i32 %31, i32* %9
  br label %32
32:
  %33 = load i32, i32* %9
  %34 = load i32, i32* %4
  %35 = icmp slt i32 %33, %34
  br i1 %35, label %38, label %36
36:
  store i32 5, i32* %8
  br label %59
38:
  %39 = load i32*, i32** %3
  %40 = load i32, i32* %7
  %41 = sext i32 %40 to i64
  %42 = getelementptr inbounds i32, i32* %39, i64 %41
  %43 = load i32, i32* %42
  %44 = load i32*, i32** %3
  %45 = load i32, i32* %9
  %46 = sext i32 %45 to i64
  %47 = getelementptr inbounds i32, i32* %44, i64 %46
  %48 = load i32, i32* %47
  %49 = xor i32 %43, %48
  %50 = icmp ne i32 %49, 0
  br i1 %50, label %55, label %51
51:
  %52 = load i32, i32* %9
  %53 = sext i32 %52 to i64
  %54 = getelementptr inbounds [128 x i32], [128 x i32]* %5, i64 0, i64 %53
  store i32 1, i32* %54
  br label %55
55:
  br label %56
56:
  %57 = load i32, i32* %9
  %58 = add nsw i32 %57, 1
  store i32 %58, i32* %9
  br label %32
59:
  br label %60
60:
  %61 = load i32, i32* %7
  %62 = add nsw i32 %61, 1
  store i32 %62, i32* %7
  br label %15
63:
  store i32 0, i32* %10
  br label %65
65:
  %66 = load i32, i32* %10
  %67 = load i32, i32* %4
  %68 = icmp slt i32 %66, %67
  br i1 %68, label %71, label %69
69:
  store i32 8, i32* %8
  br label %92
71:
  %72 = load i32, i32* %10
  %73 = sext i32 %72 to i64
  %74 = getelementptr inbounds [128 x i32], [128 x i32]* %5, i64 0, i64 %73
  %75 = load i32, i32* %74
  %76 = icmp ne i32 %75, 0
  br i1 %76, label %88, label %77
77:
  %78 = load i32*, i32** %3
  %79 = load i32, i32* %10
  %80 = sext i32 %79 to i64
  %81 = getelementptr inbounds i32, i32* %78, i64 %80
  %82 = load i32, i32* %81
  %83 = load i32*, i32** %3
  %84 = load i32, i32* %6
  %85 = add nsw i32 %84, 1
  store i32 %85, i32* %6
  %86 = sext i32 %84 to i64
  %87 = getelementptr inbounds i32, i32* %83, i64 %86
  store i32 %82, i32* %87
  br label %88
88:
  br label %89
89:
  %90 = load i32, i32* %10
  %91 = add nsw i32 %90, 1
  store i32 %91, i32* %10
  br label %65
92:
  %93 = load i32, i32* %6
  store i32 1, i32* %8
  ret i32 %93
}
declare void @llvm.memset.p0i8.i64(i8* nocapture writeonly, i8, i64, i1 immarg)
