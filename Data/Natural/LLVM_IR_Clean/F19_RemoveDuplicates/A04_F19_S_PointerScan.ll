define dso_local i32 @RemoveDuplicates(i32* %0, i32 %1) {
  %3 = alloca i32*
  %4 = alloca i32
  %5 = alloca i32*
  %6 = alloca i32*
  %7 = alloca i32
  %8 = alloca i32*
  %9 = alloca i32
  store i32* %0, i32** %3
  store i32 %1, i32* %4
  %11 = load i32*, i32** %3
  store i32* %11, i32** %5
  %13 = load i32*, i32** %3
  store i32* %13, i32** %6
  store i32 0, i32* %7
  br label %15
15:
  %16 = load i32, i32* %7
  %17 = load i32, i32* %4
  %18 = icmp slt i32 %16, %17
  br i1 %18, label %21, label %19
19:
  br label %59
21:
  %23 = load i32*, i32** %5
  store i32* %23, i32** %8
  store i32 0, i32* %9
  br label %25
25:
  %26 = load i32*, i32** %8
  %27 = load i32*, i32** %6
  %28 = icmp ult i32* %26, %27
  br i1 %28, label %29, label %42
29:
  %30 = load i32*, i32** %8
  %31 = load i32, i32* %30
  %32 = load i32*, i32** %5
  %33 = load i32, i32* %7
  %34 = sext i32 %33 to i64
  %35 = getelementptr inbounds i32, i32* %32, i64 %34
  %36 = load i32, i32* %35
  %37 = icmp eq i32 %31, %36
  br i1 %37, label %38, label %39
38:
  store i32 1, i32* %9
  br label %42
39:
  %40 = load i32*, i32** %8
  %41 = getelementptr inbounds i32, i32* %40, i32 1
  store i32* %41, i32** %8
  br label %25
42:
  %43 = load i32, i32* %9
  %44 = icmp ne i32 %43, 0
  br i1 %44, label %53, label %45
45:
  %46 = load i32*, i32** %5
  %47 = load i32, i32* %7
  %48 = sext i32 %47 to i64
  %49 = getelementptr inbounds i32, i32* %46, i64 %48
  %50 = load i32, i32* %49
  %51 = load i32*, i32** %6
  %52 = getelementptr inbounds i32, i32* %51, i32 1
  store i32* %52, i32** %6
  store i32 %50, i32* %51
  br label %53
53:
  br label %56
56:
  %57 = load i32, i32* %7
  %58 = add nsw i32 %57, 1
  store i32 %58, i32* %7
  br label %15
59:
  %60 = load i32*, i32** %6
  %61 = load i32*, i32** %5
  %62 = ptrtoint i32* %60 to i64
  %63 = ptrtoint i32* %61 to i64
  %64 = sub i64 %62, %63
  %65 = sdiv exact i64 %64, 4
  %66 = trunc i64 %65 to i32
  ret i32 %66
}
