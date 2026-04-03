define dso_local void @SelectionSort(i32* %0, i32 %1) {
  %3 = alloca i32*
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32
  store i32* %0, i32** %3
  store i32 %1, i32* %4
  store i32 0, i32* %5
  br label %10
10:
  %11 = load i32, i32* %5
  %12 = load i32, i32* %4
  %13 = sub nsw i32 %12, 1
  %14 = icmp slt i32 %11, %13
  %15 = xor i1 %14, true
  %16 = xor i1 %15, true
  br i1 %16, label %17, label %72
17:
  %19 = load i32, i32* %5
  store i32 %19, i32* %6
  %21 = load i32, i32* %5
  %22 = add nsw i32 %21, 1
  store i32 %22, i32* %7
  br label %23
23:
  %24 = load i32, i32* %7
  %25 = load i32, i32* %4
  %26 = icmp slt i32 %24, %25
  %27 = xor i1 %26, true
  %28 = xor i1 %27, true
  br i1 %28, label %29, label %46
29:
  %30 = load i32*, i32** %3
  %31 = load i32, i32* %7
  %32 = sext i32 %31 to i64
  %33 = getelementptr inbounds i32, i32* %30, i64 %32
  %34 = load i32, i32* %33
  %35 = load i32*, i32** %3
  %36 = load i32, i32* %6
  %37 = sext i32 %36 to i64
  %38 = getelementptr inbounds i32, i32* %35, i64 %37
  %39 = load i32, i32* %38
  %40 = icmp slt i32 %34, %39
  br i1 %40, label %41, label %43
41:
  %42 = load i32, i32* %7
  store i32 %42, i32* %6
  br label %43
43:
  %44 = load i32, i32* %7
  %45 = add nsw i32 %44, 1
  store i32 %45, i32* %7
  br label %23
46:
  %48 = load i32*, i32** %3
  %49 = load i32, i32* %6
  %50 = sext i32 %49 to i64
  %51 = getelementptr inbounds i32, i32* %48, i64 %50
  %52 = load i32, i32* %51
  store i32 %52, i32* %8
  %53 = load i32*, i32** %3
  %54 = load i32, i32* %5
  %55 = sext i32 %54 to i64
  %56 = getelementptr inbounds i32, i32* %53, i64 %55
  %57 = load i32, i32* %56
  %58 = load i32*, i32** %3
  %59 = load i32, i32* %6
  %60 = sext i32 %59 to i64
  %61 = getelementptr inbounds i32, i32* %58, i64 %60
  store i32 %57, i32* %61
  %62 = load i32, i32* %8
  %63 = load i32*, i32** %3
  %64 = load i32, i32* %5
  %65 = sext i32 %64 to i64
  %66 = getelementptr inbounds i32, i32* %63, i64 %65
  store i32 %62, i32* %66
  %67 = load i32, i32* %5
  %68 = add nsw i32 %67, 1
  store i32 %68, i32* %5
  br label %10
72:
  ret void
}
