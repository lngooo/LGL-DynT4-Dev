define dso_local void @P(i32* %0, i32 %1) {
  %3 = alloca i32*
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32
  %9 = alloca i32
  store i32* %0, i32** %3
  store i32 %1, i32* %4
  store i32 0, i32* %5
  br label %11
11:
  %12 = load i32, i32* %5
  %13 = load i32, i32* %4
  %14 = icmp slt i32 %12, %13
  br i1 %14, label %17, label %15
15:
  store i32 2, i32* %6
  br label %80
17:
  %18 = load i32, i32* %5
  %19 = load i32, i32* %5
  %20 = mul nsw i32 %18, %19
  %21 = add nsw i32 %20, 1
  %22 = icmp sgt i32 %21, 0
  br i1 %22, label %23, label %76
23:
  %25 = load i32, i32* %5
  store i32 %25, i32* %7
  %27 = load i32, i32* %5
  %28 = add nsw i32 %27, 1
  store i32 %28, i32* %8
  br label %29
29:
  %30 = load i32, i32* %8
  %31 = load i32, i32* %4
  %32 = icmp slt i32 %30, %31
  br i1 %32, label %35, label %33
33:
  store i32 5, i32* %6
  br label %53
35:
  %36 = load i32*, i32** %3
  %37 = load i32, i32* %8
  %38 = sext i32 %37 to i64
  %39 = getelementptr inbounds i32, i32* %36, i64 %38
  %40 = load i32, i32* %39
  %41 = load i32*, i32** %3
  %42 = load i32, i32* %7
  %43 = sext i32 %42 to i64
  %44 = getelementptr inbounds i32, i32* %41, i64 %43
  %45 = load i32, i32* %44
  %46 = icmp slt i32 %40, %45
  br i1 %46, label %47, label %49
47:
  %48 = load i32, i32* %8
  store i32 %48, i32* %7
  br label %49
49:
  br label %50
50:
  %51 = load i32, i32* %8
  %52 = add nsw i32 %51, 1
  store i32 %52, i32* %8
  br label %29
53:
  %55 = load i32*, i32** %3
  %56 = load i32, i32* %5
  %57 = sext i32 %56 to i64
  %58 = getelementptr inbounds i32, i32* %55, i64 %57
  %59 = load i32, i32* %58
  store i32 %59, i32* %9
  %60 = load i32*, i32** %3
  %61 = load i32, i32* %7
  %62 = sext i32 %61 to i64
  %63 = getelementptr inbounds i32, i32* %60, i64 %62
  %64 = load i32, i32* %63
  %65 = load i32*, i32** %3
  %66 = load i32, i32* %5
  %67 = sext i32 %66 to i64
  %68 = getelementptr inbounds i32, i32* %65, i64 %67
  store i32 %64, i32* %68
  %69 = load i32, i32* %9
  %70 = load i32*, i32** %3
  %71 = load i32, i32* %7
  %72 = sext i32 %71 to i64
  %73 = getelementptr inbounds i32, i32* %70, i64 %72
  store i32 %69, i32* %73
  br label %76
76:
  br label %77
77:
  %78 = load i32, i32* %5
  %79 = add nsw i32 %78, 1
  store i32 %79, i32* %5
  br label %11
80:
  ret void
}
