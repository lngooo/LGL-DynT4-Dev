define dso_local void @Fp(i32* %0, i32 %1) {
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
  br label %72
17:
  %19 = load i32, i32* %5
  store i32 %19, i32* %7
  %21 = load i32, i32* %5
  %22 = add nsw i32 %21, 1
  store i32 %22, i32* %8
  br label %23
23:
  %24 = load i32, i32* %8
  %25 = load i32, i32* %4
  %26 = icmp slt i32 %24, %25
  br i1 %26, label %29, label %27
27:
  store i32 5, i32* %6
  br label %48
29:
  %30 = load i32*, i32** %3
  %31 = load i32, i32* %8
  %32 = sext i32 %31 to i64
  %33 = getelementptr inbounds i32, i32* %30, i64 %32
  %34 = load i32, i32* %33
  %35 = load i32*, i32** %3
  %36 = load i32, i32* %7
  %37 = sext i32 %36 to i64
  %38 = getelementptr inbounds i32, i32* %35, i64 %37
  %39 = load i32, i32* %38
  %40 = icmp slt i32 %34, %39
  br i1 %40, label %41, label %43
41:
  %42 = load i32, i32* %8
  store i32 %42, i32* %7
  br label %44
43:
  br label %44
44:
  br label %45
45:
  %46 = load i32, i32* %8
  %47 = add nsw i32 %46, 1
  store i32 %47, i32* %8
  br label %23
48:
  %49 = load i32*, i32** %3
  %50 = load i32, i32* %5
  %51 = sext i32 %50 to i64
  %52 = getelementptr inbounds i32, i32* %49, i64 %51
  %53 = load i32, i32* %52
  store i32 %53, i32* %9
  %54 = load i32*, i32** %3
  %55 = load i32, i32* %7
  %56 = sext i32 %55 to i64
  %57 = getelementptr inbounds i32, i32* %54, i64 %56
  %58 = load i32, i32* %57
  %59 = load i32*, i32** %3
  %60 = load i32, i32* %5
  %61 = sext i32 %60 to i64
  %62 = getelementptr inbounds i32, i32* %59, i64 %61
  store i32 %58, i32* %62
  %63 = load i32, i32* %9
  %64 = load i32*, i32** %3
  %65 = load i32, i32* %7
  %66 = sext i32 %65 to i64
  %67 = getelementptr inbounds i32, i32* %64, i64 %66
  store i32 %63, i32* %67
  br label %69
69:
  %70 = load i32, i32* %5
  %71 = add nsw i32 %70, 1
  store i32 %71, i32* %5
  br label %11
72:
  ret void
}
