define dso_local void @Hi0(i32* %0, i32 %1) {
  %3 = alloca i32*
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32*
  %8 = alloca i32
  %9 = alloca i32*
  store i32* %0, i32** %3
  store i32 %1, i32* %4
  %11 = load i32, i32* %4
  %12 = ashr i32 %11, 1
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
  %20 = load i32*, i32** %3
  %21 = load i32, i32* %5
  %22 = sext i32 %21 to i64
  %23 = getelementptr inbounds i32, i32* %20, i64 %22
  store i32* %23, i32** %7
  br label %24
24:
  %25 = load i32*, i32** %7
  %26 = load i32*, i32** %3
  %27 = load i32, i32* %4
  %28 = sext i32 %27 to i64
  %29 = getelementptr inbounds i32, i32* %26, i64 %28
  %30 = icmp ult i32* %25, %29
  br i1 %30, label %33, label %31
31:
  store i32 5, i32* %6
  br label %78
33:
  %35 = load i32*, i32** %7
  %36 = load i32, i32* %35
  store i32 %36, i32* %8
  %38 = load i32*, i32** %7
  store i32* %38, i32** %9
  br label %39
39:
  %40 = load i32*, i32** %9
  %41 = load i32*, i32** %3
  %42 = load i32, i32* %5
  %43 = sext i32 %42 to i64
  %44 = getelementptr inbounds i32, i32* %41, i64 %43
  %45 = icmp uge i32* %40, %44
  br i1 %45, label %46, label %55
46:
  %47 = load i32*, i32** %9
  %48 = load i32, i32* %5
  %49 = sext i32 %48 to i64
  %50 = sub i64 0, %49
  %51 = getelementptr inbounds i32, i32* %47, i64 %50
  %52 = load i32, i32* %51
  %53 = load i32, i32* %8
  %54 = icmp sgt i32 %52, %53
  br label %55
55:
  %56 = phi i1 [ false, %39 ], [ %54, %46 ]
  br i1 %56, label %57, label %70
57:
  %58 = load i32*, i32** %9
  %59 = load i32, i32* %5
  %60 = sext i32 %59 to i64
  %61 = sub i64 0, %60
  %62 = getelementptr inbounds i32, i32* %58, i64 %61
  %63 = load i32, i32* %62
  %64 = load i32*, i32** %9
  store i32 %63, i32* %64
  %65 = load i32, i32* %5
  %66 = load i32*, i32** %9
  %67 = sext i32 %65 to i64
  %68 = sub i64 0, %67
  %69 = getelementptr inbounds i32, i32* %66, i64 %68
  store i32* %69, i32** %9
  br label %39
70:
  %71 = load i32, i32* %8
  %72 = load i32*, i32** %9
  store i32 %71, i32* %72
  br label %75
75:
  %76 = load i32*, i32** %7
  %77 = getelementptr inbounds i32, i32* %76, i32 1
  store i32* %77, i32** %7
  br label %24
78:
  br label %79
79:
  %80 = load i32, i32* %5
  %81 = ashr i32 %80, 1
  store i32 %81, i32* %5
  br label %13
82:
  ret void
}
