define dso_local void @SelectionSort(i32* %0, i32 %1) {
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
  %12 = sub nsw i32 %11, 1
  store i32 %12, i32* %5
  br label %13
13:
  %14 = load i32, i32* %5
  %15 = icmp sgt i32 %14, 0
  br i1 %15, label %18, label %16
16:
  store i32 2, i32* %6
  br label %72
18:
  %20 = load i32, i32* %5
  store i32 %20, i32* %7
  store i32 0, i32* %8
  br label %22
22:
  %23 = load i32, i32* %8
  %24 = load i32, i32* %5
  %25 = icmp slt i32 %23, %24
  br i1 %25, label %28, label %26
26:
  store i32 5, i32* %6
  br label %46
28:
  %29 = load i32*, i32** %3
  %30 = load i32, i32* %8
  %31 = sext i32 %30 to i64
  %32 = getelementptr inbounds i32, i32* %29, i64 %31
  %33 = load i32, i32* %32
  %34 = load i32*, i32** %3
  %35 = load i32, i32* %7
  %36 = sext i32 %35 to i64
  %37 = getelementptr inbounds i32, i32* %34, i64 %36
  %38 = load i32, i32* %37
  %39 = icmp sgt i32 %33, %38
  br i1 %39, label %40, label %42
40:
  %41 = load i32, i32* %8
  store i32 %41, i32* %7
  br label %42
42:
  br label %43
43:
  %44 = load i32, i32* %8
  %45 = add nsw i32 %44, 1
  store i32 %45, i32* %8
  br label %22
46:
  %48 = load i32*, i32** %3
  %49 = load i32, i32* %5
  %50 = sext i32 %49 to i64
  %51 = getelementptr inbounds i32, i32* %48, i64 %50
  %52 = load i32, i32* %51
  store i32 %52, i32* %9
  %53 = load i32*, i32** %3
  %54 = load i32, i32* %7
  %55 = sext i32 %54 to i64
  %56 = getelementptr inbounds i32, i32* %53, i64 %55
  %57 = load i32, i32* %56
  %58 = load i32*, i32** %3
  %59 = load i32, i32* %5
  %60 = sext i32 %59 to i64
  %61 = getelementptr inbounds i32, i32* %58, i64 %60
  store i32 %57, i32* %61
  %62 = load i32, i32* %9
  %63 = load i32*, i32** %3
  %64 = load i32, i32* %7
  %65 = sext i32 %64 to i64
  %66 = getelementptr inbounds i32, i32* %63, i64 %65
  store i32 %62, i32* %66
  br label %69
69:
  %70 = load i32, i32* %5
  %71 = add nsw i32 %70, -1
  store i32 %71, i32* %5
  br label %13
72:
  ret void
}
