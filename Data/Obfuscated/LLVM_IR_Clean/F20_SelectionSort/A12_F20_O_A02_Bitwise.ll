define dso_local void @xL9(i32* %0, i32 %1) {
  %3 = alloca i32*
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32*
  %8 = alloca i32
  store i32* %0, i32** %3
  store i32 %1, i32* %4
  store i32 0, i32* %5
  br label %10
10:
  %11 = load i32, i32* %5
  %12 = load i32, i32* %4
  %13 = icmp slt i32 %11, %12
  br i1 %13, label %16, label %14
14:
  store i32 2, i32* %6
  br label %86
16:
  %18 = load i32*, i32** %3
  %19 = load i32, i32* %5
  %20 = sext i32 %19 to i64
  %21 = getelementptr inbounds i32, i32* %18, i64 %20
  store i32* %21, i32** %7
  %23 = load i32, i32* %5
  %24 = add nsw i32 %23, 1
  store i32 %24, i32* %8
  br label %25
25:
  %26 = load i32, i32* %8
  %27 = load i32, i32* %4
  %28 = icmp slt i32 %26, %27
  br i1 %28, label %31, label %29
29:
  store i32 5, i32* %6
  br label %49
31:
  %32 = load i32*, i32** %3
  %33 = load i32, i32* %8
  %34 = sext i32 %33 to i64
  %35 = getelementptr inbounds i32, i32* %32, i64 %34
  %36 = load i32, i32* %35
  %37 = load i32*, i32** %7
  %38 = load i32, i32* %37
  %39 = icmp slt i32 %36, %38
  br i1 %39, label %40, label %45
40:
  %41 = load i32*, i32** %3
  %42 = load i32, i32* %8
  %43 = sext i32 %42 to i64
  %44 = getelementptr inbounds i32, i32* %41, i64 %43
  store i32* %44, i32** %7
  br label %45
45:
  br label %46
46:
  %47 = load i32, i32* %8
  %48 = add nsw i32 %47, 1
  store i32 %48, i32* %8
  br label %25
49:
  %50 = load i32*, i32** %7
  %51 = load i32*, i32** %3
  %52 = load i32, i32* %5
  %53 = sext i32 %52 to i64
  %54 = getelementptr inbounds i32, i32* %51, i64 %53
  %55 = icmp ne i32* %50, %54
  br i1 %55, label %56, label %81
56:
  %57 = load i32*, i32** %3
  %58 = load i32, i32* %5
  %59 = sext i32 %58 to i64
  %60 = getelementptr inbounds i32, i32* %57, i64 %59
  %61 = load i32, i32* %60
  %62 = load i32*, i32** %7
  %63 = load i32, i32* %62
  %64 = xor i32 %63, %61
  store i32 %64, i32* %62
  %65 = load i32*, i32** %7
  %66 = load i32, i32* %65
  %67 = load i32*, i32** %3
  %68 = load i32, i32* %5
  %69 = sext i32 %68 to i64
  %70 = getelementptr inbounds i32, i32* %67, i64 %69
  %71 = load i32, i32* %70
  %72 = xor i32 %71, %66
  store i32 %72, i32* %70
  %73 = load i32*, i32** %3
  %74 = load i32, i32* %5
  %75 = sext i32 %74 to i64
  %76 = getelementptr inbounds i32, i32* %73, i64 %75
  %77 = load i32, i32* %76
  %78 = load i32*, i32** %7
  %79 = load i32, i32* %78
  %80 = xor i32 %79, %77
  store i32 %80, i32* %78
  br label %81
81:
  br label %83
83:
  %84 = load i32, i32* %5
  %85 = add nsw i32 %84, 1
  store i32 %85, i32* %5
  br label %10
86:
  ret void
}
