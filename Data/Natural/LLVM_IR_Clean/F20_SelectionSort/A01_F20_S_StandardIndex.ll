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
  store i32 0, i32* %5
  br label %11
11:
  %12 = load i32, i32* %5
  %13 = load i32, i32* %4
  %14 = sub nsw i32 %13, 1
  %15 = icmp slt i32 %12, %14
  br i1 %15, label %18, label %16
16:
  store i32 2, i32* %6
  br label %74
18:
  %20 = load i32, i32* %5
  store i32 %20, i32* %7
  %22 = load i32, i32* %5
  %23 = add nsw i32 %22, 1
  store i32 %23, i32* %8
  br label %24
24:
  %25 = load i32, i32* %8
  %26 = load i32, i32* %4
  %27 = icmp slt i32 %25, %26
  br i1 %27, label %30, label %28
28:
  store i32 5, i32* %6
  br label %48
30:
  %31 = load i32*, i32** %3
  %32 = load i32, i32* %8
  %33 = sext i32 %32 to i64
  %34 = getelementptr inbounds i32, i32* %31, i64 %33
  %35 = load i32, i32* %34
  %36 = load i32*, i32** %3
  %37 = load i32, i32* %7
  %38 = sext i32 %37 to i64
  %39 = getelementptr inbounds i32, i32* %36, i64 %38
  %40 = load i32, i32* %39
  %41 = icmp slt i32 %35, %40
  br i1 %41, label %42, label %44
42:
  %43 = load i32, i32* %8
  store i32 %43, i32* %7
  br label %44
44:
  br label %45
45:
  %46 = load i32, i32* %8
  %47 = add nsw i32 %46, 1
  store i32 %47, i32* %8
  br label %24
48:
  %50 = load i32*, i32** %3
  %51 = load i32, i32* %7
  %52 = sext i32 %51 to i64
  %53 = getelementptr inbounds i32, i32* %50, i64 %52
  %54 = load i32, i32* %53
  store i32 %54, i32* %9
  %55 = load i32*, i32** %3
  %56 = load i32, i32* %5
  %57 = sext i32 %56 to i64
  %58 = getelementptr inbounds i32, i32* %55, i64 %57
  %59 = load i32, i32* %58
  %60 = load i32*, i32** %3
  %61 = load i32, i32* %7
  %62 = sext i32 %61 to i64
  %63 = getelementptr inbounds i32, i32* %60, i64 %62
  store i32 %59, i32* %63
  %64 = load i32, i32* %9
  %65 = load i32*, i32** %3
  %66 = load i32, i32* %5
  %67 = sext i32 %66 to i64
  %68 = getelementptr inbounds i32, i32* %65, i64 %67
  store i32 %64, i32* %68
  br label %71
71:
  %72 = load i32, i32* %5
  %73 = add nsw i32 %72, 1
  store i32 %73, i32* %5
  br label %11
74:
  ret void
}
