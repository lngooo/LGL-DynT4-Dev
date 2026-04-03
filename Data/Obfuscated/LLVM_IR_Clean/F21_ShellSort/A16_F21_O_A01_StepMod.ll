define dso_local void @GTqE(i32* %0, i32 %1) {
  %3 = alloca i32*
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32
  %9 = alloca i32
  store i32* %0, i32** %3
  store i32 %1, i32* %4
  %11 = load i32, i32* %4
  %12 = sdiv i32 %11, 2
  store i32 %12, i32* %5
  br label %13
13:
  %14 = load i32, i32* %5
  %15 = icmp sgt i32 %14, 0
  br i1 %15, label %18, label %16
16:
  store i32 2, i32* %6
  br label %82
18:
  %20 = load i32, i32* %5
  store i32 %20, i32* %7
  br label %21
21:
  %22 = load i32, i32* %7
  %23 = load i32, i32* %4
  %24 = icmp slt i32 %22, %23
  br i1 %24, label %27, label %25
25:
  store i32 5, i32* %6
  br label %78
27:
  %29 = load i32*, i32** %3
  %30 = load i32, i32* %7
  %31 = sext i32 %30 to i64
  %32 = getelementptr inbounds i32, i32* %29, i64 %31
  %33 = load i32, i32* %32
  store i32 %33, i32* %8
  %35 = load i32, i32* %7
  store i32 %35, i32* %9
  br label %36
36:
  %37 = load i32, i32* %9
  %38 = load i32, i32* %5
  %39 = icmp sge i32 %37, %38
  br i1 %39, label %40, label %67
40:
  %41 = load i32*, i32** %3
  %42 = load i32, i32* %9
  %43 = load i32, i32* %5
  %44 = sub nsw i32 %42, %43
  %45 = sext i32 %44 to i64
  %46 = getelementptr inbounds i32, i32* %41, i64 %45
  %47 = load i32, i32* %46
  %48 = load i32, i32* %8
  %49 = icmp sgt i32 %47, %48
  br i1 %49, label %50, label %65
50:
  %51 = load i32*, i32** %3
  %52 = load i32, i32* %9
  %53 = load i32, i32* %5
  %54 = sub nsw i32 %52, %53
  %55 = sext i32 %54 to i64
  %56 = getelementptr inbounds i32, i32* %51, i64 %55
  %57 = load i32, i32* %56
  %58 = load i32*, i32** %3
  %59 = load i32, i32* %9
  %60 = sext i32 %59 to i64
  %61 = getelementptr inbounds i32, i32* %58, i64 %60
  store i32 %57, i32* %61
  %62 = load i32, i32* %5
  %63 = load i32, i32* %9
  %64 = sub nsw i32 %63, %62
  store i32 %64, i32* %9
  br label %66
65:
  br label %67
66:
  br label %36
67:
  %68 = load i32, i32* %8
  %69 = load i32*, i32** %3
  %70 = load i32, i32* %9
  %71 = sext i32 %70 to i64
  %72 = getelementptr inbounds i32, i32* %69, i64 %71
  store i32 %68, i32* %72
  br label %75
75:
  %76 = load i32, i32* %7
  %77 = add nsw i32 %76, 1
  store i32 %77, i32* %7
  br label %21
78:
  br label %79
79:
  %80 = load i32, i32* %5
  %81 = sdiv i32 %80, 2
  store i32 %81, i32* %5
  br label %13
82:
  ret void
}
