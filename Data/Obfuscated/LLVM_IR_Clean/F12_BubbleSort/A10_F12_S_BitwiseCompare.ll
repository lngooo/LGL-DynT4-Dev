define dso_local void @zpkT(i32* %0, i32 %1) {
  %3 = alloca i32*
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32
  %9 = alloca i32
  %10 = alloca i32
  %11 = alloca i32
  store i32* %0, i32** %3
  store i32 %1, i32* %4
  store i32 0, i32* %5
  br label %13
13:
  %14 = load i32, i32* %5
  %15 = load i32, i32* %4
  %16 = sub nsw i32 %15, 1
  %17 = icmp slt i32 %14, %16
  br i1 %17, label %20, label %18
18:
  store i32 2, i32* %6
  br label %97
20:
  store i32 0, i32* %7
  br label %22
22:
  %23 = load i32, i32* %7
  %24 = load i32, i32* %4
  %25 = load i32, i32* %5
  %26 = sub nsw i32 %24, %25
  %27 = sub nsw i32 %26, 1
  %28 = icmp slt i32 %23, %27
  br i1 %28, label %31, label %29
29:
  store i32 5, i32* %6
  br label %93
31:
  %33 = load i32*, i32** %3
  %34 = load i32, i32* %7
  %35 = sext i32 %34 to i64
  %36 = getelementptr inbounds i32, i32* %33, i64 %35
  %37 = load i32, i32* %36
  %38 = load i32*, i32** %3
  %39 = load i32, i32* %7
  %40 = add nsw i32 %39, 1
  %41 = sext i32 %40 to i64
  %42 = getelementptr inbounds i32, i32* %38, i64 %41
  %43 = load i32, i32* %42
  %44 = sub nsw i32 %37, %43
  store i32 %44, i32* %8
  %46 = load i32, i32* %8
  %47 = icmp ne i32 %46, 0
  %48 = zext i1 %47 to i32
  %49 = load i32, i32* %8
  %50 = lshr i32 %49, 31
  %51 = xor i32 %50, 1
  %52 = and i32 %48, %51
  store i32 %52, i32* %9
  %54 = load i32, i32* %9
  %55 = sub nsw i32 0, %54
  store i32 %55, i32* %10
  %57 = load i32*, i32** %3
  %58 = load i32, i32* %7
  %59 = sext i32 %58 to i64
  %60 = getelementptr inbounds i32, i32* %57, i64 %59
  %61 = load i32, i32* %60
  %62 = load i32*, i32** %3
  %63 = load i32, i32* %7
  %64 = add nsw i32 %63, 1
  %65 = sext i32 %64 to i64
  %66 = getelementptr inbounds i32, i32* %62, i64 %65
  %67 = load i32, i32* %66
  %68 = xor i32 %61, %67
  %69 = load i32, i32* %10
  %70 = and i32 %68, %69
  store i32 %70, i32* %11
  %71 = load i32, i32* %11
  %72 = load i32*, i32** %3
  %73 = load i32, i32* %7
  %74 = sext i32 %73 to i64
  %75 = getelementptr inbounds i32, i32* %72, i64 %74
  %76 = load i32, i32* %75
  %77 = xor i32 %76, %71
  store i32 %77, i32* %75
  %78 = load i32, i32* %11
  %79 = load i32*, i32** %3
  %80 = load i32, i32* %7
  %81 = add nsw i32 %80, 1
  %82 = sext i32 %81 to i64
  %83 = getelementptr inbounds i32, i32* %79, i64 %82
  %84 = load i32, i32* %83
  %85 = xor i32 %84, %78
  store i32 %85, i32* %83
  br label %90
90:
  %91 = load i32, i32* %7
  %92 = add nsw i32 %91, 1
  store i32 %92, i32* %7
  br label %22
93:
  br label %94
94:
  %95 = load i32, i32* %5
  %96 = add nsw i32 %95, 1
  store i32 %96, i32* %5
  br label %13
97:
  ret void
}
